#include <iostream>

//suppose we create a  std::sting s="very long string"; then we maded another stirng s2=s1; so now 21 will copied to s2 which is a costly process and in passsing a string to a fnx also the same thing arises

//so instead of copying it we could steal it :D
int main(){
std::string s1="copy construct me ";
std::string s2;

std::cout<<"s1 : "<<s1<<std::endl;
std::cout<<"s2 : "<<s2<<std::endl;

/*
output as expected : 
s1 : copy construct me 
s2 : 

*/

s2=std::move(s1);
//move allows us to adopt or steal a value;
//s1 is still some valid value maybe it stores nullptr in the data in the stirng 
//but it still exists

std::cout<<"s1 : "<<s1<<std::endl;
std::cout<<"s2 : "<<s2<<std::endl;

// output
// s1 : 
// s2 : copy construct me 

//now trying with rvalue reference
s1=static_cast<std::string&&>(s2);//s2 is moved to s1 using reference 

/*
If we equate s2 or rvalue reference then equate it to something it acts same as move if the default data type of s2 is a rvalue referece we still need to use move or static_cast<std::string&&> to explicitely typecast it 

*/


std::cout<<"s1 : "<<s1<<std::endl;
std::cout<<"s2 : "<<s2<<std::endl;

/*
output L
s1 : copy construct me 
s2 : 

*/

}