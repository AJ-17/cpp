#include <iostream>
class Collection{
    public: 
    Collection(){
        data=new int[10];

    }
    ~Collection(){
        delete[] data;
    }
    // The second const ensures that the current object (this) is not modified inside the function. It does not apply to all objects, only the one on which the function is called.
    const int operator[](std::size_t idx) const{
        return data[idx];
    }
    int& operator[](std::size_t idx){
        return data[idx];
    }
    private:
        int *data;
};
int main(){

    Collection a;
    a[0]=1;
    a[1]=11;
    a[2]=111;
    a[3]=1111;
    a[4]=11111;
    a[5]=111111;
    a[6]=1111111;
    a[7]=11111111;
    a[8]=111111111;
    a[9]=1111111111;
    for(int i=0;i<10;i++){
        std::cout<<a[i]<<",";
    }
    std::cout<<std::endl;

}