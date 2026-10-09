#pragma once

// експорт/імпорт функцій dll
#ifdef ARRAYUTILS_EXPORTS
#define ARRAYUTILS_API extern "C" __declspec(dllexport)
#else
#define ARRAYUTILS_API extern "C" __declspec(dllimport)
#endif

// Оголошення функцій із C-linkage
ARRAYUTILS_API void quickSort(int* arr, int size);
ARRAYUTILS_API void mergeSort(int* arr, int size);
ARRAYUTILS_API void heapSort(int* arr, int size);
ARRAYUTILS_API bool isSorted(const int* arr, int size);
ARRAYUTILS_API void findExtremes(const int* arr, int size, int* minVal, int* maxVal);