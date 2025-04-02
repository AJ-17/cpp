#include <iostream>

using namespace std;
//making a fnx inside another is not allowed
void fnx();// the best practive is to introduce all the fnx first here then define them under the int main fnx 
int fn();

int main(){

    cout << fn();
return 0;
}
int fn() {    

    fnx();
    return 2;
}    
void fnx(){
        //void means that it will not return any value
        cout <<"fnx executed\n";
    }
