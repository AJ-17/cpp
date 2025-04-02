#include <iostream>

int main(){
    int i=23;
    int &ref=i;
    std::cout <<"Value of i : "<<i<<std::endl;
    std::cout <<"Value of ref to i : "<<ref<<std::endl;

    std::cout <<"address of i : "<<&i<<std::endl;
    std::cout <<"address of ref : "<<&ref<<std::endl;
    /*
    └─$ ./o
    Value of i : 23
    Value of ref to i : 23
    address of i : 0x7ffdd8f6e9a4
    address of ref : 0x7ffdd8f6e9a4
    */

    //so both are same no new spacec is assigned for the reference and a reference should always be inilized 
    


    // <<<<<<<<<<<<<<<<<<<<<IMP>>>>>>>>>>>>>>>>>>>>>>>

//PASSING BY REFERENCE IN FNX IS FASTER THEN ANY OTHER METHOD 
    return 0;
}