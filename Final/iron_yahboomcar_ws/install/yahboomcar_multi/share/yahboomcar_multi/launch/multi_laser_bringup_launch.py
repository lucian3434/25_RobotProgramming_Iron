from launch import LaunchDescription
from launch_ros.actions import Node 
import os
from launch.actions import IncludeLaunchDescription
from launch.conditions import LaunchConfigurationEquals
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from launch.actions import DeclareLaunchArgument
import os


def generate_launch_description():
    ROBOT_TYPE = os.getenv('ROBOT_TYPE')
    RPLIDAR_TYPE = os.getenv('RPLIDAR_TYPE')
    print("\n-------- robot_type = {}, rplidar_type = {} --------\n".format(ROBOT_TYPE, RPLIDAR_TYPE))
    # CAMERA_TYPE = os.getenv('CAMERA_TYPE')
    robot_type_arg = DeclareLaunchArgument(name='robot_type', default_value=ROBOT_TYPE, 
                                              choices=['x1','x3','r2'],
                                              description='The type of robot')
    rplidar_type_arg = DeclareLaunchArgument(name='rplidar_type', default_value=RPLIDAR_TYPE, 
                                              choices=['a1','s2','4ROS'],
                                              description='The type of robot')
    robot_name_arg = DeclareLaunchArgument(name='robot_type', default_value=ROBOT_TYPE)
    #test_var = LaunchConfiguration('test_var', default='test_var_2')
    multi_bringup_x3_launch = IncludeLaunchDescription(PythonLaunchDescriptionSource(
        [os.path.join(get_package_share_directory('yahboomcar_multi'), 'launch'),
        '/bringup_multi.launch.xml']),
         condition=LaunchConfigurationEquals('robot_type', 'x3')
    )
    tf_base_link_to_laser = Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            arguments = ['0.0435', '5.258E-05', '0.11', '3.14', '0', '0', 'base_link', 'laser']
    )
    
    return LaunchDescription([
        robot_type_arg,
        multi_bringup_x3_launch
    ])
