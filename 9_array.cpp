#include <iostream>

using namespace std;

int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout <<"0 : "<< cars[0] <<"\nSize in byte each element is int so size is 4 byte each  : "<<sizeof(cars);
    
    string letters[2][2][2] = {
  {
    { "A", "B" },
    { "C", "D" }
  },
  {
    { "E", "F" },
    { "G", "H" }
  }
};
return 0;
}