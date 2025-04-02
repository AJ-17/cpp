#include <iostream>
#include <array>       // Required for std::array
#include <algorithm>   // Required for sort(), reverse()

int main() {
    // ✅ 1. Declaration & Initialization
    std::array<int, 5> arr1 = {10, 20, 30, 40, 50};  // Direct initialization
    std::array<int, 5> arr2;                        // Uninitialized values (garbage)
    std::array<int, 5> arr3 = {1, 2};               // Partially initialized, rest = 0
    std::array<int, 5> arr4{};                      // Zero-initialized
    std::array<int,5> arrn{5,6,5};

    // ✅ 2. Access Elements
    std::cout << "arr1[2]: " << arr1[2] << "\n";     // Direct access
    std::cout << "arr1.at(2): " << arr1.at(2) << "\n"; // Safe access with bounds checking
    std::cout << "First: " << arr1.front() << "\n";   // First element
    std::cout << "Last: " << arr1.back() << "\n";     // Last element

    // ✅ 3. Iterate Over Elements
    std::cout << "arr1 elements (normal loop): ";
    for (size_t i = 0; i < arr1.size(); i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << "\n";

    std::cout << "arr1 elements (range-based loop): ";
    for (int x : arr1) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    std::cout << "arr1 elements (using iterators): ";
    for (auto it = arr1.begin(); it != arr1.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // ✅ 4. Modifying Elements
    arr1.fill(100);  // Fill entire array with 100
    std::cout << "arr1 after fill(100): ";
    for (int x : arr1) std::cout << x << " ";
    std::cout << "\n";

    arr1.swap(arr3);  // Swap arr1 and arr3
    std::cout << "arr1 after swap with arr3: ";
    for (int x : arr1) std::cout << x << " ";
    std::cout << "\n";

    // ✅ 5. Utility Functions
    std::cout << "Size of arr1: " << arr1.size() << "\n";
    std::cout << "Is arr1 empty? " << (arr1.empty() ? "Yes" : "No") << "\n";
    std::cout << "Raw pointer to arr1: " << arr1.data() << "\n";

    // ✅ 6. Sorting & Algorithms
    std::array<int, 5> arr5 = {5, 1, 4, 2, 3};

    std::sort(arr5.begin(), arr5.end()); // Sort ascending
    std::cout << "arr5 after sorting: ";
    for (int x : arr5) std::cout << x << " ";
    std::cout << "\n";

    std::reverse(arr5.begin(), arr5.end()); // Reverse order
    std::cout << "arr5 after reversing: ";
    for (int x : arr5) std::cout << x << " ";
    std::cout << "\n";


    std::fill(arr1.begin(),arr1.end(),459);
    for(auto x:arr1)std::cout <<x<<" ";
    return 0;
}
