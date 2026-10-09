# динамічна бібліотека 
add_library(ArrayUtils SHARED src/ArrayUtils.cpp)

# макрос для експорту символів під час збірки самої бібліотеки
target_compile_definitions(ArrayUtils PRIVATE ARRAYUTILS_EXPORTS)

#папка include публічна для всіх, хто підключить бібліотеку
target_include_directories(ArrayUtils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(ArrayUtils PUBLIC cxx_std_20)