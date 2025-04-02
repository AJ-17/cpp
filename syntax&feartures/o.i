# 0 "05.cpp"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "05.cpp"


__attribute__((always_inline)) inline int fnx(int x,int y){
    return x+y;
}
int main(){
    int a=247;
    int b=334;

    int c=fnx(a,b);

    return 0;
}
