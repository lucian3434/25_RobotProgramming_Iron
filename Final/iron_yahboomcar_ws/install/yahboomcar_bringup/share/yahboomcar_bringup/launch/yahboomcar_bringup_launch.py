from ament_index_python.packages import get_package_share_path

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, LaunchConfiguration

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

import os
from ament_index_python.packages import get_package_share_directory

from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    urdf_tutorial_path = get_package_share_path('yahboomcar_description')
    default_model_path = urdf_tutorial_path / 'urdf/yahboomcar_R2.urdf.xacro'
    default_rviz_config_path = urdf_tutorial_path / 'rviz/yahboomcar.rviz'
    model_arg = DeclareLaunchArgument(name='model', default_value=str(default_model_path),description='Absolute path to robot urdf file')
    rviz_arg = DeclareLaunchArgument(name='rvizconfig', default_value=str(default_rviz_config_path))
    robot_description = ParameterValue(Command(['xacro ', LaunchConfiguration('model')]),value_type=str)
    gui_arg = DeclareLaunchArgument(name='gui', default_value='false', choices=['true', 'false'],description='Flag to enable joint_state_publisher_gui')
    
    imu_filter_config = os.path.join(              # 找到参数文件的完整路径
      get_package_share_directory('yahboomcar_bringup'),
      'param',
      'imu_filter_param.yaml'
      )
    
    driver_node = Node(
        package='yahboomcar_bringup',
        executable='Mcnamu_driver',
    )
    
    base_node = Node(
        package='yahboomcar_base_node',
        executable='base_node',
    )
    
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
    )
    
    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        condition=IfCondition(LaunchConfiguration('gui'))
    )
    
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description}]
    )


    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        condition=UnlessCondition(LaunchConfiguration('gui'))
    )
    
    imu_filter_node = Node(
        package='imu_filter_madgwick',
        executable='imu_filter_madgwick_node',
        remappings=[('/sub_imu','/imu/imu_raw'),
                    ('/sub_mag','/mag/mag_raw'),
                    ('/pub_imu','/imu/imu_data'),
                    ('/pub_mag','/mag/mag_field'),
                   ],
        parameters=[imu_filter_config]
    )
    
    ekf_node = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
         get_package_share_directory('robot_localization'), 'launch'),
         '/ekf.launch.py'])
      )
 
    yahboom_joy_node = Node(
        package='yahboomcar_ctrl',
        executable='yahboom_joy',
    )
 
    return LaunchDescription([
    rviz_arg,
    gui_arg,
    model_arg,
    driver_node,
   #rviz_node,
    base_node,
    joint_state_publisher_node,
    joint_state_publisher_gui_node,
    robot_state_publisher_node,
    imu_filter_node,
    ekf_node,
    yahboom_joy_node
    ])
