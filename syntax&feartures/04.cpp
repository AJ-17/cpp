// References (&)
//in int &a=b; a will be treaded as a alias of b  l
#include <iostream>
using namespace std;

void fnx(int &a);
int main(){
    int i=1;
    cout <<"Value before passing : "<<i;
    fnx(i);
    cout <<"Value after passing  : "<<i;
return 0;
}
void fnx(int &a){
    a=a+1;
}