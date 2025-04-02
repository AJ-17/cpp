#include <iostream>

using namespace std;

int main(){
    string v1="var1";
    string &m1 = v1; 
    //datatype &var2 = var1 is just a alias of var1 (another name ) but both variable are same with same affress
    cout <<"v1 : "<<v1<<"\n v1 adr : "<<&v1<<"\nm1 : "<<m1<<"\nm1 addr : "<<&m1;
    m1="var3432";
    cout <<v1<<' '<<m1;
return 0;
}