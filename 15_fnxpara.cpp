#include <iostream>

using namespace std;



void fnx(int age,string name="noname"){
    cout <<"Hi "<<name<<' '<<age<<"\n";
}
int main(){
    fnx(18,"Anshu");
    fnx(17,"Gagan");
    fnx(20);
    
return 0;
}