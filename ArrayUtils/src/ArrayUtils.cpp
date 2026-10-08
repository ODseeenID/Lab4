#include "ArrayUtils.h"
#include <algorithm>

namespace ArrayUtils {
    void quickSort(int* arr, int size) {
        //від граничних випадків nullptr або порожній масив
        if (arr && size > 1) {
            std::sort(arr, arr + size); // базується на QuickSort/IntroSort
        }
    }

    void mergeSort(int* arr, int size) {
        if (arr && size > 1) {
            std::stable_sort(arr, arr + size); // базується на MergeSort
        }
    }

    void heapSort(int* arr, int size) {
        if (arr && size > 1) {
            std::make_heap(arr, arr + size);
            std::sort_heap(arr, arr + size);
        }
    }

    bool isSorted(const int* arr, int size) {
        if (!arr || size <= 1) return true;
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] > arr[i + 1]) return false;
        }
        return true;
    }

    void findExtremes(const int* arr, int size, int* minVal, int* maxVal) {
        if (!arr || size <= 0 || !minVal || !maxVal) return;
        *minVal = arr[0];
        *maxVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < *minVal) *minVal = arr[i];
            if (arr[i] > *maxVal) *maxVal = arr[i];
        }
    }
}