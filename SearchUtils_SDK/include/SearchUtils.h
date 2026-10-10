#pragma once

#ifdef SEARCHUTILS_EXPORTS
#define SEARCHUTILS_API extern "C" __declspec(dllexport)
#else
#define SEARCHUTILS_API extern "C" __declspec(dllimport)
#endif

SEARCHUTILS_API int binarySearch(const int* arr, int size, int target);
SEARCHUTILS_API int findFirst(const int* arr, int size, int target);
SEARCHUTILS_API int findLast(const int* arr, int size, int target);
SEARCHUTILS_API int countOccurrences(const int* arr, int size, int target);
SEARCHUTILS_API int kthElement(int* arr, int size, int k);