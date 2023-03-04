#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the intiger value for a and b: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("a is larger than amonge of those");
    }
    else if (b > a && b > c)
    {
        printf("b is larger than amonge of those");
    }
    else if (c > a && c > b)
    {
        printf("c is larger than amonge of those");
    }
    else
    {
        printf("Something wents wrong");
    }
    

    return 0;
}