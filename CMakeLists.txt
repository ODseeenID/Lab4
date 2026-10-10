cmake_minimum_required(VERSION 3.15)
project(ExplicitTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(ExplicitTest main.cpp)

#копіювання SearchUtils.dll у вихідну папку для виконання
add_custom_command(TARGET ExplicitTest POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_newer
        "${CMAKE_CURRENT_SOURCE_DIR}/../SearchUtils_SDK/bin/SearchUtils.dll"
        "$<TARGET_FILE_DIR:ExplicitTest>"
    COMMENT "Copying SearchUtils.dll to output directory"
)