#include <iostream>

using namespace std;

int main(){
    int n;
    cout <<"Enter the number : ";
    cin >>n;
    if (n==0){
        cout <<"Zero";
    }
    else if (n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    
    //variable = (condition) ? expressionTrue : expressionFalse;

    string l = (n%2==0)? "even":"odd";
    cout <<'\n'<< l<<'\n';

    return 0;
}