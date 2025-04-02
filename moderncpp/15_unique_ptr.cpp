/*
Please Read ME !(
Raw Pointers are risky to use in program
as they allow room for errors 

forget to free the memory
there is no ownership 

*/
#include <iostream>
#include <memory>
class UDT{
    public:
        UDT(){
            std::cout<<"UTD Creadted"<<std::endl;}
        ~UDT(){
            std::cout<<"UTD Destroyed"<<std::endl;
            //will be destory at the end of scope
            }

        }   ;     


int main(){
int *a1=new int[10];

for(int i=0;i<10;i++)a1[i]=0;

int *ptr1=a1;
std::cout<<"*ptr1 : "<<*ptr1<<std::endl;
delete[] a1;
int *a2=new int[10];

int *ptr2=ptr1;
std::cout<<"*ptr1 : "<<*ptr1<<std::endl;

std::cout<<"*ptr2 : "<<*ptr2<<std::endl;


//and to resolve the above problem we have smart pointers 



// UDT anshu;

std::unique_ptr<UDT> anshu =std::unique_ptr<UDT>(new UDT);
/*
new UDT dynamically allocates a UDT object on the heap.
std::unique_ptr<UDT>(new UDT) creates a unique_ptr that takes ownership of the object.
anshu now manages the UDT object, and when anshu goes out of scope, it will automatically delete the object.
*/
std::cout<<"Check1"<<std::endl;
//now need to delete it will delete itself once out of {}
/*
1. What is std::unique_ptr?

std::unique_ptr is a smart pointer in C++ that:

    Manages a dynamically allocated object.
    Ensures the object is automatically deleted when the unique_ptr goes out of scope.
    Prevents memory leaks by automatically calling delete when it's no longer needed.
    Does not allow copying, ensuring only one owner of the allocated object.
*/

//to create a array that is pointed to by one unique ptr
std::unique_ptr<UDT[]> ans=std::unique_ptr<UDT[]>(new UDT[3]);

//and these above expressions are equivalent to 
std::unique_ptr<UDT[]> anshu_array=std::make_unique<UDT[]>(5);
//now we can ;t allovate the give n address to another pointer
//eg
// these will give error 
// std::unique_ptr<UDT> pt=anshu;

//we can't delete a unique pointer within the block scope,no copies or share
//but if still we want to delete it wintint the scope we can sue 
anshu.reset();
ans.reset(new UDT());  // Deletes the first object, replaces it with a new one
//but we can transfer the ownership by move

// std::unique_ptr<UDT> ptr=std::move(anshu);



return 0;

}