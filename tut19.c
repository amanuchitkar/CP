#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
void star(int a)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a + 1 - i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
int takenum()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    return a;
}
int main()
{
    int a, b, c;
    // c=add(7,8);
    // printf("%d",c);
    c = takenum();
    star(c);

    return 0;
}