#include "header.hpp"
#include <iostream>

student::student(){
    std::cout<<"Constructed ! \n";
}
student::~student(){
    std::cout<<"Destructed ! "<<name<<"\n";
}
void student::print_name(){
    std::cout<<name<<std::endl;
}