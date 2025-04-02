
#include <iostream>

class vector3f{
    public:
    //insilizer list faster
    // The members are always initialized in the order in which they are declared in the class.
    //compiler will read in order only like first x then y then z no matter whats the order in the inisilization the thing that matters is the defination order 

        vector3f(): z(x),x(1),y(x){

        }

        //assignment
        // vector3f(){
        //     x=0.1f;
        //     y=0.2f;
        //     z=0.3f;


        // }

   
    float x,y,z;
};
//import usecase of operator overload
std::ostream& operator<<(std::ostream& os,const vector3f& obj){
    os<<obj.x<<","<<obj.y<<","<<obj.z<<std::endl;
    return os;
}
int main(){

    vector3f a;


    //to avoid usign cout << obj we can use operation overload
    std::cout <<a;
    
    //do you know structures have by default public and class are bydefault private
    return 0;
}