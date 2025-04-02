#include <ios>
#include <iostream>
#include <type_traits>

int main() {
    int a = 5;
    const int b = 10;
    
    std::cout<<std::boolalpha<<std::is_const<const int>() <<std::endl;//0 if not const
    std::cout << "Is 'a' const? " << std::boolalpha << std::is_const<decltype(a)>::value << std::endl;
    std::cout << "Is 'b' const? " << std::boolalpha << std::is_const<decltype(b)>::value << std::endl;

    return 0;
}
