#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Befor swapping the value of a = %d and b = %d\n", a, b);
    // temp=a;
    // a=b;
    // b=temp;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping the value of a = %d and b = %d\n", a, b);
    // printf("After swapping: %d,%d\n", a, b);
    return 0;
}