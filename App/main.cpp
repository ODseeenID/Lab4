#include <iostream>
#include "ArrayUtils.h"

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = { 42, 15, 8, 99, 23, 4, 16 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, size);
    std::cout << "Is sorted? " << (ArrayUtils::isSorted(arr, size) ? "Yes" : "No") << std::endl;

    ArrayUtils::quickSort(arr, size);

    std::cout << "Sorted array: ";
    printArray(arr, size);
    std::cout << "Is sorted? " << (ArrayUtils::isSorted(arr, size) ? "Yes" : "No") << std::endl;

    int minVal, maxVal;
    ArrayUtils::findExtremes(arr, size, &minVal, &maxVal);
    std::cout << "Min: " << minVal << ", Max: " << maxVal << std::endl;

    //перевірка страховки
    ArrayUtils::mergeSort(nullptr, 5); 
    std::cout << "Edge case test passed successfully." << std::endl;

    return 0;
}