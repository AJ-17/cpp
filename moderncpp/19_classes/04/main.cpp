
#include "header.hpp"
#include <iostream>


int main(){
    
    vector3 a;
    a.x=0.1f;
    a.y=1.2f;
    a.z=2.3f;
    
    vector3 b=a;
    //compiler gives us 3 default things
    //constructor,destructuor,copy constructor
    


    std::cout<<b.x<<","<<b.y<<","<<b.z<<std::endl;
    //0.1,1.2,2.3



    //lets check another behaviour
    vector3 c;//now constructor seted the values to 0
    std::cout<<c.x<<","<<c.y<<","<<c.z<<std::endl;

    c=b;//copy assignement operator
    std::cout<<c.x<<","<<c.y<<","<<c.z<<std::endl;


    //so we know how to write our own constructor and destructor now lets see how to write a copy constructor and copy assignment operator

    array ar1;
    ar1.SetData(0,1007777);
    ar1.printdata();

    array ar2=ar1;
    ar2.printdata();
    //these produced an error if we don't define the copy constructor ourself
    /*
    free(): double free detected in tcache 2
zsh: IOT instruction (core dumped)  ./o
    because the same pointer is used for both so we should write our own copy assignemnt and constructor
    */


    array ar3;
    ar3=ar2;//copy assignemnt
    ar3.printdata();
return 0;
}