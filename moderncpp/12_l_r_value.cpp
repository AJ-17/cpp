//lvalues are the value which get some address 
//rvalues are the value on right side which don't have a adderss
//eg
#include <ios>
#include <iostream>
#include <type_traits>

int get42(){
    return 42;
}
int main(){
int a=9;
//address of a =&a so its lvalue
//9n is a rvalue

int b=(a+2);
//b is lvalue a+2 is rvalue


int array[100];
array[10+a]=0;
//array is lvalue a+10 is rvalue




//lets try something
/*
get42()=100;

the error we got

2.cpp: In function ‘int main()’:
12.cpp:21:6: error: lvalue required as left operand of assignment
   21 | get42()=100;

*/



//now lets talk about lvalue reference and rvalue reference 

int &ref=a;
//ref wont get a address but its a reference to a variable a which have a addrress so its a lvalue reference


//what if we do int &ref =10

/*
we will get error message

12.cpp:39:10: error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
   39 | int &ref=10;
      |          ^
*/

//if we read the erro we get to knew that its for non-const what if we try these out for const lvalue refernce 


const int &ref2=10;
//it worked ! :)




//coming to the rvalue reference 

int&& ref3=10;
//in c++ && represents rvalue referecen 

std::cout<<ref3<<std::endl;
//it works
std::cout<<&ref3;//but we still have a address doubtable :()

//suppose we have two really big string and want to concate them we can use rvalue referecne as it dont bother about again storing them it just referses the source

//to know the type we can also use is_lvalue or is_rvalue or is_lvalue_reference or is_rvalue_reference
//eg
std::cout<<"\n"<<std::boolalpha<<std::is_rvalue_reference<int&&>::value;
std::cout<<"\n"<<std::boolalpha<<std::is_lvalue_reference<decltype(ref2)>::value;

}