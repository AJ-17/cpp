#include <iostream>

using namespace std;
void fnx(int d,int a=0,int b=1);
int main(){
    fnx(435,34);
    fnx(12);
    return 0;

}
void fnx(int d,int a,int b){
    cout << "d  : "<<d;

    cout << " , a  : "<<a;
    cout << " , b  : "<<b<<endl;


}
/*
Key Rules:

    Must be declared in the function prototype (or in a function definition if there is no prototype).
    Default parameters must be from right to left (i.e., once a parameter has a default, all parameters to its right must also have defaults).
    Can be skipped in function calls.
*/