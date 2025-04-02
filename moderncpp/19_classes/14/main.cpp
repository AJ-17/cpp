#include <iostream>

class Base{
    public:
        Base(){ std::cout <<"Base Constructor "<<std::endl;}
        virtual ~Base(){std::cout<<"Base Destructor"<<std::endl;}
        void MemberFunc(){std::cout<<"Base::MemberFunc()\n";}


};

class Derived : public Base {
    public:
        Derived(){ std::cout <<"Derived Constructor "<<std::endl;}
        ~Derived(){std::cout<<"Derived Destructor"<<std::endl;}
        void MemberFunc(){std::cout<<"Derived::MemberFunc()\n";}
};

int main(){
    Base* instance =new Derived;
    instance->MemberFunc();
    delete instance;

    //note only base destructor is called when we try to delete instance 
    //Base Constructor 
    //Derived Constructor 
    //Base::MemberFunc()
    //Base Destructor 
    
    //to resolve these issue we can make our base class destructior virtual
    //Base Constructor 
    //Derived Constructor 
    //Derived::MemberFunc()
    //Derived Destructor
    //Base Destructor

    /*
    IMP
    Virtual Keyword: Jab base class ka destructor virtual hota hai, C++ ek vtable (virtual table) banata hai. Har derived class ka apna destructor is vtable mein register ho jata hai.
    */

    return 0;
}