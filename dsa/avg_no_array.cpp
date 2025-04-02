// Program for average of an array (Iterative and Recursive)

#include <iostream>

using namespace std;

int main(){
    int a[]={2,5};
    float avg=0;
    for(int i:a){
        avg+=i;
    }
    avg=avg/(sizeof(a)/sizeof(a[0]));
    cout << "Avg : "<<avg<<"\n";
return 0;
}