//Memory Allocation
#include <iostream>
using std::cout;
using std::string;
using std::cin;

int main(){
    int *p=new int[10];//10 integer spaces will  be reserved 
    char *c=new char[10];//10 character spaces will  be reserved
    int **dp=new int*[10];
    for(int i=0;i<10;i++){
        dp[i]=new int[5];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout <<dp[i][j]<<" ";
        }
        cout <<"\n";
    }
    char **names=new char*[10];
    //or 
    //string *names=new string[10];
    
    for(int i=0;i<10;i++){
        names[i]=new char[100];
    }
    //although string is a better option 
    string *n=new string[10];
    for(int i=0;i<10;i++){
        cin >>*(n+i);
    }
    
    


    return 0;
}