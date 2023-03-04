#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter integer number: ");
    scanf("%d",&n);
    // for (int i = 1; i <=n; i++)
    // {
    //     sum+=i;
    // }
    sum=n*(n+1)/2;
    printf("The sum is : %d",sum);
    
    return 0;
}