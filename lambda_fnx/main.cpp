#include <iostream>

int main(){
    int a=1,b=2,c=3;

    auto l1=[=](int i,int j){return i+j+a;};
    std::cout <<l1(1,2)<<std::endl;
    
    // auto l2=[a,b](){return a+b+c};its a wrong statement as what ever varibales we write in [] can be used in the lambda fnx and if we  write [=]  then all the in scope are accessable
    
    //[=] captures everthing by there values 3



    auto l2=[a,b](){return a+b;};
    std::cout <<l2()<<std::endl;
    //now output is 3 
    a=2;
    //now output should be 4
    //lets see

    std::cout <<l2()<<std::endl;
    //shit its still 3 that means the variable are maded copies and then used so what we can do is use mutable  before {}

    auto l3=[b,c]()mutable{return b+c;};
        std::cout <<l3()<<std::endl;
    //now output is 5
    b=5;
    //now output should be 8
    //lets see

    std::cout <<l3()<<std::endl;
    //shit we got 5


    // so we observe that the outside and inside variable are different .so what the use of mutable 

    //mutable reffers to the changes done inside eg if we changthe value for b the we can explect the b to change when we call the fnx next time 


    //eg 


    int count = 0;
    
    auto increment = [count]() mutable { return ++count; };
    
    std::cout << increment() << std::endl;  // Output: 1
    std::cout << increment() << std::endl;  // Output: 2


    //so now we should know how can we make the inside and outside variable same 


    // until now we passed the copy to the fnx 
    //now we will learn to pass reference 


    /*
    All by Value	[=]	Copies all variables (read-only unless mutable is used).
    All by Reference	[&]	References all variables (modifiable).
    Mixed Capture	[=, &var] / [&, var]	Mixes value and reference captures.
    Mutable Lambda	mutable	Allows modifying copies of captured values.
    
    */

    return 0;
}   