#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int m;
    printf("Enter number: ");
    scanf("%d", &m);
    printf("Factorial of %d is %d", m, factorial(m));
    return 0;
}