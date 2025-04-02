//we know how to pass arguments to a thread as a fnx but those were copies of the arguments passed how can we pass refereces lets see


#include <iostream>
#include<thread>



void fnx1(int &i){
    std::cout<<"Reference variable address in t1 : "<<&i<<std::endl<<"Value : "<<i<<std::endl;
}

int main(){
    int a=10;
    std::cout<<"Address of a in main  : "<<&a<<std::endl;
    std::thread t1(fnx1,std::ref(a));
    t1.join();
    return 0;

}