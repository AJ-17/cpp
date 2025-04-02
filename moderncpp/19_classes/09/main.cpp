#include <iostream>


class udt{
    public:
        explicit udt(int);

    private:
        int m;
};
udt::udt(int i ){
            m=i;
            std::cout<<"m : "<<m<<std::endl;
        };
int main(){ 

    //as m is a int and udt accpets a int but if we pass anthing else then implecit conversion can take place 

    udt obj1{5};
    

    //so we didn't wanted it to happen we don't want the compiler to make gusses so we use  explicit 


    return 0;
}