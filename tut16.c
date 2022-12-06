#include <stdio.h>

int main()
{
    int age, i;
    for (i = 0; i < 100; i++)
    {
        printf("Enter your age: ");
        scanf("%d", &age);
        if (age > 10)
        {
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}