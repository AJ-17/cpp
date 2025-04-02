#include <iostream>

class Base{
    public:
        Base(){ std::cout <<"Base Constructor "<<std::endl;}
        ~Base(){std::cout<<"Base Destructor"<<std::endl;}
        void MemberFunc(){std::cout<<"Base::MemberFunc()\n";}


};

class Derived : public Base {
    public:
        Derived(){ std::cout <<"Derived Constructor "<<std::endl;}
        ~Derived(){std::cout<<"Derived Destructor"<<std::endl;}
        void MemberFunc(){std::cout<<"Derived::MemberFunc()\n";}
};

int main(){
    Base baseInstance;
    baseInstance.MemberFunc();
    /*
    Base Constructor 
    Base::MemberFunc()
    Base Destructor
*/

    Derived derivedInstance;
    derivedInstance.MemberFunc();
    /*
    Base Constructor 
    Derived Constructor 
    Derived::MemberFunc()
    Derived Destructor
    Base Destructor
    */


      
    return 0;
}