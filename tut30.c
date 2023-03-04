#include <stdio.h>

int main()
{   int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("The number is nigative");
    }
    else if (n>0)
    {
        printf("The number is Positive");
        
    }
    else
    {
        printf("Somting went wrong");
    }
    
    
    
    return 0;
}