#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("This a is 1\n");
        break;
    case 2:
        printf("This a is 2\n");
        break;
    case 3:
        printf("This a is 3\n");
        break;

    default:
        printf("Somthing wants wrong.\n");
        break;
    }
    return 0;
}