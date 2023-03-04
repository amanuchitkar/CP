#include <stdio.h>

int main()
{
    int n;
    float k=0,f,i,c;
    printf("Enter lenght in meter: ");
    scanf("%d",&n);
    k=n/1000;
    f=n*3.28;
    i=n*39.37;
    c=n*100;
    printf("Meter into kilometers: %f\n",k);
    printf("Meter into Feet: %f\n",f);
    printf("Meter into Inch: %f\n",i);
    printf("Meter into CM: %f\n",c);
    return 0;
}