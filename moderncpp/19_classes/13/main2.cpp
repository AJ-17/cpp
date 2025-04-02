#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {  // virtual enables dynamic dispatch means fnx can be overwritten 
        cout << "Parent class function\n";
    }
};

class Child : public Parent {
public:
    void show()  override{//althought if we use the keyword virtual we may not use  override in cpp 11+ version still it will work but its better to use to avoid spell mistakes in fnx name while overwriting
        cout << "Child class function\n";
    }
};

int main() {
    Child c;
    //IMP note  : WE CAN USE THE PARENT CLASS POINTER TO POINT TO A CHILD CLASS 


    //note if we use a parent pointer to point then we can't access the child class members by it without  a typecast
    Parent* ptr1 = &c;
    ptr1->show();  // Output: Child class function [if we use ] [if not used then parent show will be called]

    Parent p;
    Parent* ptr2=&p;
    ptr2->show();  //output : Parent class function [if we use ] [if not used then parent show will be called]


    Parent* ptr3=new Child; 
    ptr3->show();   //Output: Child class function [if we use ] [if not used then parent show will be called]

    Parent* ptr4=new Parent; 
    ptr4->show();   //Output: Parent class function [if we use ] [if not used then parent show will be called]


    //or without virtual/override 
    //we can use scope resolution ::

    /*
    ideally the answer should be parent class function but because of :: its child
    Parent* ptr3=new Child; 
    ptr3->Child::show();

    
    */


    return 0;
}
