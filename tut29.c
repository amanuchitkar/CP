#include <stdio.h>

int main()
{
    int n;
    printf("Enter intiger number: ");
    scanf("%d",&n);

    if (n>100)
    {
        printf("Number is grater than 100");
    }
    
    else if (n==100)
    {
        printf("Number is equal to 100");
    }
    
    else{
        printf("Number is less than 100");
    }
    
    return 0;
}