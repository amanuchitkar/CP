#include <stdio.h>

int main()
{
    for (int i = 0, j = 0; i < 6, j < 10; i++)
    {
        printf("%d %d\n", i, j);
        j++;
    }
    return 0;
}