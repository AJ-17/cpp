#include <iostream>
#include <vector>
int  main(){
    //sizeof
    int i=5;
    int *p=&i;
    int ar[]={0,1,2,3};
    int *pt=new int[20];

    std::cout<<"Size of i : "<<sizeof(i)<<std::endl;//4 byte
    std::cout<<"Size of p : "<<sizeof(p)<<std::endl;//8 byte
    std::cout<<"Size of ar : "<<sizeof(ar)<<std::endl;//4*4byte=16
    std::cout<<"Size of pt : "<<sizeof(pt)<<std::endl;//8byte as the dynmmically allocated array we only have address of first data and the sizeof it is 8byte

    std::vector<int> vec(5,0);//its a class so the total byte of the class will be returned eg 24 const

    std::cout<<"Size of vec : "<<sizeof(vec)<<std::endl;
    

/*
Size of i : 4
Size of p : 8
Size of ar : 16
Size of pt : 8
Size of vec : 24
*/

    return 0;
}