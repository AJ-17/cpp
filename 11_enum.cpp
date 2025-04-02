#include <iostream>

using namespace std;

int main(){
    enum program{
     It=24,
     csecore  //by default its code will become 25 if It is 24 just 1 + and if no value given too it then it will be 0 and csecore 1 
    };
    enum program myvar=csecore;
    cout << myvar;
return 0;
}