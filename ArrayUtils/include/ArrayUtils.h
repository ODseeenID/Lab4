#pragma once

namespace ArrayUtils {
    void quickSort(int* arr, int size);
    void mergeSort(int* arr, int size);
    void heapSort(int* arr, int size);
    bool isSorted(const int* arr, int size);
    void findExtremes(const int* arr, int size, int* minVal, int* maxVal);
}