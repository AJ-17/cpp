#include <iostream>

class UserDefinedType{
    public:

    //after declaring the fnx to be friend of the class we can access the private or protected varibables too 
    friend void Print_Private_Member_varaible_of_udt(UserDefinedType u);
    //we can also define out friend class which can use our private variables firend class classname
    private:
        int m_privateMemeberVariable;

};

void Print_Private_Member_varaible_of_udt(UserDefinedType u){

    std::cout<<"m_privateMemeberVariable : "<<u.m_privateMemeberVariable;

}

int main(){
    UserDefinedType instance;

    //we can't directly access the value of a private variable 
    // instance.m_privateMemeberVariable=42;
    Print_Private_Member_varaible_of_udt(instance);

    return 0;
}