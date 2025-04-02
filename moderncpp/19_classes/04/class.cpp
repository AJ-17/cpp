#include <iostream>
#include "header.hpp"
array::array(){
    std::cout<<"constructor \n";
    data=new int[10];
    for(int i=0;i<10;i++){
        data[i]=i*i;
    }
}
void array::printdata(){
    for(int i=0;i<10;i++){
        std::cout<<data[i]<<std::endl;
    }
}
array::~array(){
    delete[] data;
}
array::array(const array & rhs){
    std::cout<<"Copy constructor\n";
    data=new int[10];
    for(int i=0;i<10;i++){
        data[i]=rhs.data[i];//you migth wonder data is private how we are accessing it 
        //ans :  It's the same data type, so we can access private members for the same type. 
    }
    
    
}

array& array::operator=(const array&rhs){
    std::cout<<"Copy assignment \n";
    if(&rhs==this){
        //if we coping same object don;t do anthing
        return *this;
    }
    delete[] data;//its a good practice to detete and then reallocate memory in copy assignment 
    data=new int[10];
    for(int i=0;i<10;i++){
        data[i]=rhs.data[i];
    }
    return *this;
}
