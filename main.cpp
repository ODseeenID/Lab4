#include <iostream>
#include <vector>
#include "SearchUtils.h"

int main() {
    std::vector<int> arr = { 1, 3, 5, 5, 7, 9, 11, 15 };
    int target = 5;

    std::cout << "Test 1: Neyavne" << std::endl;

    //виклик функції напряму
    int bIndex = binarySearch(arr.data(), arr.size(), target);
    std::cout << "Binary Search for " << target << " index: " << bIndex << std::endl;

    int first = findFirst(arr.data(), arr.size(), target);
    std::cout << "Find First for " << target << " index: " << first << std::endl;

    int last = findLast(arr.data(), arr.size(), target);
    std::cout << "Find Last for " << target << " index: " << last << std::endl;

    int count = countOccurrences(arr.data(), arr.size(), target);
    std::cout << "Count Occurrences of " << target << ": " << count << std::endl;

    //тест граничного випадку nullptr
    int badResult = binarySearch(nullptr, 10, 5);
    std::cout << "nullptr Test result: " << badResult << " (-1 is expected)" << std::endl;


    return 0;
}