# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_typesupport_introspection_c:yahboom_web_savmap_interfaces__rosidl_typesupport_introspection_c;__rosidl_typesupport_introspection_cpp:yahboom_web_savmap_interfaces__rosidl_typesupport_introspection_cpp")

# populate yahboom_web_savmap_interfaces_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "yahboom_web_savmap_interfaces::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'yahboom_web_savmap_interfaces' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND yahboom_web_savmap_interfaces_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
