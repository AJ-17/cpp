#include <iostream>
#include <stdio.h>
using namespace std;
void fnx(int &a);
int main(){
    int i=1;
    printf("Value before passing : %d\n",i);
    fnx(i);
    printf("Value after passing  : %d",i);
return 0;
}
void fnx(int &a){
    a=a+1;
}