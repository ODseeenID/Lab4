#include <iostream>
#include <vector>
#include <windows.h>

// оголошення типів вказівників на функції
typedef int(*BinarySearchFunc)(const int*, int, int);
typedef int(*CountOccurrencesFunc)(const int*, int, int);

int main() {
    std::cout << "Test 2: Yavne Linking" << std::endl;

    HMODULE hDll = LoadLibrary("SearchUtils.dll");
    if (!hDll) {
        std::cerr << "Can't load SearchUtils.dll, fix this or your pc will blow up" << std::endl;
        return 1;
    }

    // вказівники на функції за текстовими назвами
    BinarySearchFunc binSearch = (BinarySearchFunc)GetProcAddress(hDll, "binarySearch");
    CountOccurrencesFunc countOcc = (CountOccurrencesFunc)GetProcAddress(hDll, "countOccurrences");

    if (!binSearch || !countOcc) {
        std::cerr << "Can't find functions inside dll" << std::endl;
        FreeLibrary(hDll);
        return 1;
    }

    std::vector<int> arr = { 1, 3, 5, 5, 7, 9, 11 };
    int target = 5;

    int index = binSearch(arr.data(), static_cast<int>(arr.size()), target);
    std::cout << "Binary Search index for " << target << ": " << index << std::endl;

    int count = countOcc(arr.data(), arr.size(), target);
    std::cout << "Count Occurrences of " << target << ": " << count << std::endl;

    FreeLibrary(hDll); //вивантаження бібліотеки
    std::cout << "DLL successfully unloaded." << std::endl;

    return 0;
}