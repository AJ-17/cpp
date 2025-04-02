#include <iostream>
using namespace std;

int main(){

    /*
    =	x = 5	x = 5	
    +=	x += 3	x = x + 3	
    -=	x -= 3	x = x - 3	
    *=	x *= 3	x = x * 3	
    /=	x /= 3	x = x / 3	
    %=	x %= 3	x = x % 3	
    &=	x &= 3	x = x & 3	
    |=	x |= 3	x = x | 3	
    ^=	x ^= 3	x = x ^ 3	
    >>=	x >>= 3	x = x >> 3	
    <<=	x <<= 3	x = x << 3
    
    */
    int x=5;
    x-=2;
    int y=x;
    y-=1;
    x&=y;
    cout << x<<'\n';

    int a = 5;
    int b = 3;
    cout << (a > b); // returns 1 (true) because 5 is greater than 3
/*
    ==	Equal to	x == y	
!=	Not equal	x != y	
>	Greater than	x > y	
<	Less than	x < y	
>=	Greater than or equal to	x >= y	
<=	Less than or equal to	x <= y

&& 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
|| 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
!	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)


*/
}

/*
2
1
*/