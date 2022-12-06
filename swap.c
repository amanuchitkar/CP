#include <stdio.h>

int main()
{
    int a, b, temp;
    a = 2;
    b = 3;
    // temp=a;
    // a=b;
    // b=temp;
    a = a + b;
    b = a - b;
    a = -b + a;
    printf("%d,%d", a, b); 
    
    return 0;
}