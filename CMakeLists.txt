cmake_minimum_required(VERSION 3.15)
project(ImplicitTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(ImplicitTest main.cpp)

# до папки з заголовочним файлом 
target_include_directories(ImplicitTest PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../SearchUtils_SDK/include")

#до папки з .lib файлом, лінкування бібліотеки
target_link_directories(ImplicitTest PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../SearchUtils_SDK/lib")
target_link_libraries(ImplicitTest PRIVATE SearchUtils.lib)

# копіювання SearchUtils.dll у папку з бінарником
add_custom_command(TARGET ImplicitTest POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_newer
        "${CMAKE_CURRENT_SOURCE_DIR}/../SearchUtils_SDK/bin/SearchUtils.dll"
        "$<TARGET_FILE_DIR:ImplicitTest>"
    COMMENT "Copying SearchUtils.dll to output directory"
)