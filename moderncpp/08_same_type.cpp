#include <iostream>

int main() {
    int x = 5;
    decltype(x) y = 10; // y will have the same type as x (int)

    std::cout << "y is of type: " << typeid(y).name() << std::endl;
    return 0;
}