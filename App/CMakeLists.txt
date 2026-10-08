add_executable(MyApplication main.cpp)
# лінкування статичної бібліотеки до додатка
target_link_libraries(MyApplication PRIVATE ArrayUtils)