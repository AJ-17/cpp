#include <iostream>
#include <typeinfo>
int main(){
    int var=5;
    std::cout << typeid(var).name();
    //i int c char f float ....
    return 0;
}