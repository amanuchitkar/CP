#include <stdio.h>

int main()
{
    int i = 0, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        printf("%d\n", i + 1);
        i += 1;
    } while (i <= num);
    return 0;
}