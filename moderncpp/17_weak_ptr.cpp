/*

these code is have a reference that will never reach 0 so to resolve these we use weak ptr
#include <iostream>
#include <memory>

struct B;  // Forward declaration

struct A {
    std::shared_ptr<B> b_ptr;
    ~A() { std::cout << "A Destructor\n"; }
};

struct B {
    std::shared_ptr<A> a_ptr;
    ~B() { std::cout << "B Destructor\n"; }
};

int main() {
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();

    a->b_ptr = b;  
    b->a_ptr = a;  // Circular reference (use_count never reaches 0)

    return 0;  // Memory leak! A and B never get destroyed.
}

*/

//std::weak_ptr is designed only for std::shared_ptr.
//they don't hold ownership and without increase the reference count of shared object they point toward the memory object
/*
Cannot be used directly → Must be converted to a std::shared_ptr using .lock().
Avoids memory leaks when objects reference each other.
*/
#include <iostream>
#include <memory>

struct B;

struct A {
    std::weak_ptr<B> b_ptr;  // Use weak_ptr to break circular reference
    ~A() { std::cout << "A Destructor\n"; }
};

struct B {
    std::shared_ptr<A> a_ptr;
    ~B() { std::cout << "B Destructor\n"; }
};

int main() {
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();

    a->b_ptr = b;  // Weak reference (does NOT increase use_count)
    b->a_ptr = a;  // Shared reference




    return 0;  // Both objects get deleted correctly.


}

/*
if (auto ptr = ptr.lock()) {
    std::cout << "Object is alive! use_count: " << ptr.use_count() << "\n";
} else {
    std::cout << "Object has been deleted!\n";
}
//another way to do so is to use 
ptr.expired(); returns 1 if its expired
std::shared_ptr<UDT> ptr = weak.lock();  // Converts to shared_ptr (if object exists)
*/