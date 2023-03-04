#include <stdio.h>

int main()
{
    float A,p,r,t;
    printf("Enter principal balance: ");
    scanf("%f",&p);
    printf("Enter annual interest rate: ");
    scanf("%f",&r);
    printf("Enter 	time (in years): ");
    scanf("%f",&t);
    A=p*t*r/100;
    // A=p*(1+t*r);
    printf("%f",A);
    return 0;
}