#include <stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    // int count=1;
    // for (int i = 0; i <= 8; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //        printf(" %d",count);
    //        count++;
    //     }

    //     printf("\n");
    // }

    return 0;
}