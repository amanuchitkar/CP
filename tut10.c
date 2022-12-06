#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d year old.", age);
    if (age >= 18)
    {
        printf("You can drive car");
    }
    else if (age <= 0)
    {
        printf("You not yet born..");
    }
    else
    {
        printf("You can't drive car...");
    }

    return 0;
}