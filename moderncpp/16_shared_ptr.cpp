#include <memory>
#include <iostream>

struct UDT {
    UDT() { std::cout << "UDT Constructor\n"; }
    ~UDT() { std::cout << "UDT Destructor\n"; }
};

int main() {
    std::shared_ptr<UDT> anshu = std::make_shared<UDT>();  // Create a shared_ptr
    std::shared_ptr<UDT> ptr = anshu;  // Share ownership with ptr

    std::cout << "anshu use count: " << anshu.use_count() << "\n";
    std::cout << "ptr use count: " << ptr.use_count() << "\n";//total no of ptr toward that memory
    //these keeps a count so that when all ptr are removed then the memory can be distroyed 
    //eg:
    {
    std::shared_ptr<UDT> ptr2 = anshu;  
    std::cout << "ptr use count: " << ptr.use_count() << "\n";

    }
    std::cout << "ptr use count: " << ptr.use_count() << "\n";

    //another representation
    std::shared_ptr<UDT> ptr3 = std::make_shared<UDT>();  
    
// If multiple std::shared_ptr instances share ownership, resetting only reduces the reference count, but the object remains alive until the last owner releases it.
    return 0;
}
/*
IMP

Workaround: Convert unique_ptr to shared_ptr

If you must use a std::unique_ptr, but need a std::weak_ptr, you can convert it to a std::shared_ptr.

std::unique_ptr<UDT> unique = std::make_unique<UDT>();
std::shared_ptr<UDT> shared = std::move(unique);  // Convert to shared_ptr
std::weak_ptr<UDT> weak = shared;  // Now weak_ptr can observe it


*/