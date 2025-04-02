#include <iostream>


class Base{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};
class Derived0 :public Base{
    //we can access a,b but not c
    //in Derived0 a is treated as a public b as protected 
};
class Derived1 :protected Base{
    //we can access a,b but not c
    //in Derived1 a,b both are treated as protected;
};
class Derived2 :private Base{
    //we can access a,b but not c
    //in Derived1 a,b both are treated as private;
};



