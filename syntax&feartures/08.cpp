constexpr int fnx(int a,int b){
    return a+b;

}

int main(){
    int c1=fnx(1,2);
    // The compiler will insert c1 = 3; in the executable, but the assignment still happens at runtime.
    //as function is constexpr not the c1 
    //now if we don't use constexpr then the fnx value will be evaluated in the runtime but if we use the constexpr then it will evaluated in the compile time itself 



    /*
    If you write:

int a = 5;

The assignment happens at runtime, not compile-time.

    */

}