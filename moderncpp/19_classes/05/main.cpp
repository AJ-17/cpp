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
    vector3f operator+(const vector3f& rhs){
            vector3f result;
            result.x=x+rhs.x;
            result.y=y+rhs.y;
            result.z=z+rhs.z;
            return result;
    }
    vector3f operator-(const vector3f& rhs){
            vector3f result;
            result.x=x-rhs.x;
            result.y=y-rhs.y;
            result.z=z-rhs.z;
            return result;
    }
    vector3f& operator-(){
            vector3f result;
            x=-x;
            y=-y;
            z=-z;
            return *this;
    }
    vector3f& operator++(){
        // pre-increment
            x=x+1;
            y=y+1;
            z=z+1;
            return *this;
    }
        vector3f operator++(int){
            std::cout<<"this";        //POST increment
            vector3f old=*this;
            x=x+1;
            y=y+1;
            z=z+1;
            return old;
    }
    vector3f& operator--(){
        // pre-increment
            x=x-1;
            y=y-1;
            z=z-1;
            return *this;
    }
    vector3f operator--(int){
        //POST increment
            vector3f old=*this;
            x=x-1;
            y=y-1;
            z=z-1;
            return old;
    }
    //why reference if its not static 
    vector3f& operator=(const vector3f&rhs){
    std::cout<<"Copy assignment \n";
        
        this->x=rhs.x;
        this->y=rhs.y;
        this->z=rhs.z;


        return *this;
    }
    bool operator==(const vector3f&rhs){
        if(x==rhs.x && y==rhs.y && z==rhs.z){
            return true;
        }
        else{
            return false;
        }
    }

    float x,y,z;
};


//we can also write the above thing here as 
/*
    bool operator==(const vector3f lhs,const vector3f&rhs){
        if(lhs.x==rhs.x && lhs.y==rhs.y && lhs.z==rhs.z){
            return true;
        }
        else{
            return false;
        }
    }
*/
int main(){

    vector3f a;
    a.x=0.1;
    a.z=0.2;
    a.y=0.3;

vector3f b;
    b.x=0.1;
    b.z=0.2;
    b.y=0.3;
vector3f c;
c=a+b;
    std::cout<<c.x<<","<<c.y<<","<<c.z<<std::endl;
    
    c++;
    std::cout<<c.x<<","<<c.y<<","<<c.z<<std::endl;

    std::cout<<(a==b)<<std::endl;
    return 0;
}