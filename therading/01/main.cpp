#include <iostream>
#include <thread>
#include <unistd.h>


void fnx1(){
    for(int i=0;i<10;i++){
        sleep(1);

        std::cout<<(char)(i+67)<<std::endl;
    }
}
void fnx2(){
    for(int i=0;i<10;i++){

        sleep(1);
        std::cout<<(i)<<std::endl;
    }
}


int main(){
    char c;
    std::thread t1(fnx1);
    std::thread t2(fnx2);
    // if we don't use join then the main will not wait for the thread and the main will continue and may end before the execution of the fnx 
    
    //so its recommended to use join so that the main waits for the thread
    t1.join();
    t2.join();

    std::cout <<"Enter the enter : ";
    std::cin >> c;

    return 0;
}