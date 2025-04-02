#include <functional>
#include <iostream>

//one of the way is to use typedef for function typedef acts a little different
//

typedef int *pt(int ,int);//its a typedef for creating a fnx pointer


int add(int i,int j){
    return i+j;
}
int sub(int i,int j){
    return i-j;
}
int main(){
    int (*fnx_ptr)(int ,int);//function pointer
    int chooice=0;
    if(chooice==1){
        fnx_ptr=add;
    }
    else{
        fnx_ptr=sub;
    }
    std::cout<<fnx_ptr(2,3)<<std::endl;
    pt op;//fnx ptr
    //or
    std::function<int(int,int)> op2;//fnx pointer
    return 0;
}