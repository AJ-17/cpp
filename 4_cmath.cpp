#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a=2;
    int b=3;

    int c=max(a,b);
    cout <<c<<'\n';

    int d=min(a,b);
    cout <<d<<'\n';

    float e=sqrt(d+c);
    cout <<e<<'\n';

    cout << round(e)<<'\n';

    cout << log(d)<<'\n';
return 0;
}