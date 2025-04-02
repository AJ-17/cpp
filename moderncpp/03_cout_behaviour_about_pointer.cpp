#include <iostream>
int main(){
    //as we don't specity the data format in cout so sometimes we don't get desired thing so in conclusion in some places we should use explicit typecast
    //eg
    char a='a';
    char b='b';
    char c='c';
    //as &a represent address of a we want to print the address but cout treats it as a string address and instread start iterating and getting the values
    std::cout <<&a<<std::endl;
    std::cout <<&b<<std::endl;
    std::cout <<&c<<std::endl;
    //output
    /*
    a
    ba
    cba
    */
    //insted we should typecast to avoid these problem
    std::cout <<((void *)&a)<<std::endl;
    std::cout <<((void *)&b)<<std::endl;
    std::cout <<((void *)&c)<<std::endl;   
    //output 
    /*
    0x7fff5e4950bf
    0x7fff5e4950be
    0x7fff5e4950bd
    */

}