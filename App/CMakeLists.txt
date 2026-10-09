add_executable(MyApplication main.cpp)

# лінкування .lib для етапу компонування
target_link_libraries(MyApplication PRIVATE ArrayUtils)

#копіювання .dll у папку з .exe 
add_custom_command(TARGET MyApplication POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "$<TARGET_FILE:ArrayUtils>"
    "$<TARGET_FILE_DIR:MyApplication>"
)