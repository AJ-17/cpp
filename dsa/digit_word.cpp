//Program to print the given digit in words

#include <iostream>
using namespace std;
int main(){
    string a;
    cout << "Enter the number : ";
    cin >> a;
    string b[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(char i:a){
        cout << b[(int)i-48]<<" ";
    }
    cout << "\n";
return 0;
}