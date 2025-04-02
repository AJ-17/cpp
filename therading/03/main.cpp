#include <iostream>
#include <thread>
// #include <chrono>

void fnx1(std::string a,int i){
    std::cout<<"String : "<<a<<" I : "<<i<<std::endl;
}

int main(){


    //passing argument to a thread fnx 
    std::thread t1(fnx1,"HAHAHA",0);
    //arguments are passed as a copy

    t1.join();
    std::cout <<"Thread t1 ended"<<std::endl;
    return 0;
}