#include <stdio.h>

int main()
{
    int n, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", n, i, (n * i));
        
    }
    // ________________OR-----------------------------
    // printf("%d x 1 = %d\n", n, n * 1);
    // printf("%d x 2 = %d\n", n, n * 2);
    // printf("%d x 3 = %d\n", n, n * 3);
    // printf("%d x 4 = %d\n", n, n * 4);
    // printf("%d x 5 = %d\n", n, n * 5);
    // printf("%d x 6 = %d\n", n, n * 6);
    // printf("%d x 7 = %d\n", n, n * 7);
    // printf("%d x 8 = %d\n", n, n * 8);
    // printf("%d x 9 = %d\n", n, n * 9);
    // printf("%d x 10 = %d\n", n, n * 10);

    // n=a;
    // printf("%d x 1 = %d",a,n*1);
    // printf("%d\n",n*1);
    return 0;
}