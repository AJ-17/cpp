// to count the number of even and odd element in the array;

#include <iostream>

using namespace std;

int main(){
    int a[] ={22, 32, 42, 52, 62};
    int e=0;
    int o=0;
    for(int i:a){
        if(i%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
    }
    cout << "even : "<<e<<"\n odd : "<<o<<"\n";

    
return 0;
}