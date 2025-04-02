#include <iostream>



//inheretance

class father{
    public:
    father(){
        std::cout<<"Father constructor called\n";
    };
    void fh(){
        std::cout<<"Hello from father ";
    }


};
class son : public father {
    //as we declare a son object  a father constructor is also called and we can use all the parent calss fnxs
    public:
    son(){
        std::cout<<"son constructor called\n";

    };
};



int main(){
    son s1;
    s1.fh();
    return 0;
}