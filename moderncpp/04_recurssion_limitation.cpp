//we can't use big recurssions as they are stored in stacks and they might collide with some other non-free space
//eg
#include <iostream>
int pr(int i){
    if(i==0){
        std::cout<<"0 done";
        return 0;
    }
    std::cout<<i<<std::endl;
    return pr(i-1);

}
#define N 1000000
//after certian recersion the program will crash segmentation fault (core dumped)  
int main(){
    pr(N);
    return 0;
}