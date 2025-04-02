#include "header.hpp"
#include <iostream>


//WE CAN define the constructor take inputs and evalute them and construct a object
student::student(std::string a){
    this->name=a;//or name =a
    //even we can set defaut value for some variables here 
    //eg
    this->roll_no=0;
    std::cout<<"Constructed ! \n";
}
student::~student(){
    std::cout<<"Destructed ! "<<name<<"\n";
}
void student::print_name(){
    std::cout<<name<<std::endl;
}