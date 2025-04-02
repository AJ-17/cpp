#include <iostream>
#include <vector>       // Required for std::vector
#include <algorithm>   // Required for sort(), reverse()

int main() {
    //most of the features are same as arrays but in these we can also change the size and reduce or expand the vector 

    // ✅ 1. Declaration & Initialization
    std::vector<int> arr1 = {10, 20, 30, 40, 50};  // Direct initialization
    std::vector<int> arr2;                        // Uninitialized values (garbage)
    std::vector<int> arr3 = {1, 2};               // Partially initialized, rest = 0
    std::vector<int> arr4{};                      // Zero-initialized
    std::vector<int> arrn{5,6,5};
    std::vector<int> f(5,0);// Creates a vector of size 5, initialized with 0

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

    arr1.swap(arr3);  // Swap arr1 and arr3
    std::cout << "arr1 after swap with arr3: ";
    for (int x : arr1) std::cout << x << " ";
    std::cout << "\n";

    // ✅ 5. Utility Functions
    std::cout << "Size of arr1: " << arr1.size() << "\n";
    std::cout << "Is arr1 empty? " << (arr1.empty() ? "Yes"// Creates a vector of size 5, initialized with 0
 : "No") << "\n";
    std::cout << "Raw pointer to arr1: " << arr1.data() << "\n";

    // ✅ 6. Sorting & Algorithms
    std::vector<int> arr5 = {5, 1, 4, 2, 3};

    std::sort(arr5.begin(), arr5.end()); // Sort ascending
    std::cout << "arr5 after sorting: ";
    for (int x : arr5) std::cout << x << " ";
    std::cout << "\n";

    std::reverse(arr5.begin(), arr5.end()); // Reverse order
    std::cout << "arr5 after reversing: ";
    for (int x : arr5) std::cout << x << " ";
    std::cout << "\n";

    std::cout <<arr1.size()<<std::endl;


    std::fill(arr1.begin(),arr1.end(),459);
    for(auto x:arr1)std::cout <<x<<" ";

    



    //size related



    std::vector<int> vec1(5,49);
    vec1.resize(4);
    //remaninng elements will be removed;
    std::cout <<std::endl<< vec1.size()<<std::endl;
    for(auto x:vec1)std::cout <<x<<" ";
    vec1.resize(6);
    std::cout<<std::endl;

    for(auto x:vec1)std::cout <<x<<" ";

    //then we can use the index to insert the values or we can just use vec.push_back(60);
    //to push a value 60 by creating a spae iat the end of the vec
    vec1.push_back(60);
    std::cout<<std::endl;
    for(auto x:vec1)std::cout <<x<<" ";


    std::vector<int> vec;
    vec.reserve(5); // Reserves space for 5 elements, but size is still 0

    vec.push_back(10); // Adding elements still increases size
    vec.push_back(20);

    std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << std::endl;


    
    return 0;

}
