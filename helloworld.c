#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the number ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("\nenter number %d", n);
        }
        else
        {
            continue;
        }
    }

    return 0;
}
