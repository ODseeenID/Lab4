# статична бібліотека
add_library(ArrayUtils STATIC src/ArrayUtils.cpp)

#папка include публічна для всіх, хто підключить бібліотеку
target_include_directories(ArrayUtils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(ArrayUtils PUBLIC cxx_std_20)