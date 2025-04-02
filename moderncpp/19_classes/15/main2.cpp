/*



*/
#include <iostream>

class BBB{
    public:
        virtual void ping(){
            std::cout<<"Hello form BBB\n";
        }

};

class DDD : public BBB {
    public:
        void ping(){
            std::cout<<"Hello from DDD\n";
        }
};



int main(){
    BBB *d=new DDD;
    d->ping();

    


    return 0;
}