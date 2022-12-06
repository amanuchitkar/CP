#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5, max = a, min = a;
    printf("Enter num:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    if (e > max)
    {
        max = e;
    }
    // else
    // {
    //     printf("Somthing wants wrong\n");
    // }
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (d < min)
    {
        min = d;
    }

    if (e < min)
    {
        min = e;
    }
    // else
    // {
    //     printf("Somthing wants wrong\n");
    // }

    printf("The max number is %d and min number is %d", max, min);
    

    return 0;
}
