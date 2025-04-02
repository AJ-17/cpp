#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";

    }
    int a[]={54,42,44,25};
    for (int i:a){
        cout <<i<<'\n';
    }
    // break; continue; are also avalibale in these loops
return 0;
}   