#include <iostream>
#include <thread>
#include <chrono>
void fnx1(){
    std::cout<<"FNX1"<<std::endl;
    std::cout<<"In these invterval we have to everthing needed by these thread"<<std::endl;
}


int main(){
    std::thread t1(fnx1);

    t1.detach();//will free the resources used by the thread but won't wait for it 

    //main thread will sleep for 3 second
    std::cout <<"Main thread sleeping .... "<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout <<"Main thread woke up"<<std::endl;
    return 0;
}