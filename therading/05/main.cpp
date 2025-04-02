#include <iostream>
#include <thread>


//now lets see lambda fnx 

int main(){
        std::thread t([]() {
        std::cout << "Hello from lambda thread!\n";
    });

    t.join();

    
    return 0;
}
