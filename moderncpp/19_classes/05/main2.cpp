//like we use operator between number eg 1+2=3 4*2=8 and more these are like defined fnx we can define these operations for our class
//for eg if we do a+b and a and b are vector then the respective components should be added so we could do that
//for eg if there is a class of thrings and we want to add 2 so that the output is concatinated 
//for eg if there is a class of strings and if we multiply a string with a number then iot should be repeated tht many times 

#include <iostream>

class vector3f{
    public:
        vector3f(){
            x=0.0f;
            y=0.0f;
            z=0.0f;


        }

    //why reference if its not static 
    vector3f& operator=(const vector3f&rhs){
    std::cout<<"Copy assignment \n";
        
        this->x=rhs.x;
        this->y=rhs.y;
        this->z=rhs.z;


        return *this;
    }

    float x,y,z;
};
//import usecase of operator overload
std::ostream& operator<<(std::ostream& os,const vector3f& obj){
    os<<obj.x<<","<<obj.y<<","<<obj.z<<std::endl;
    return os;
}
int main(){

    vector3f a;
    a.x=0.1;
    a.z=0.2;
    a.y=0.3;


    //to avoid usign cout << obj we can use operation overload
    std::cout <<a;

    return 0;
}