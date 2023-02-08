#include <stdio.h>
#include<math.h>
float pi=3.14;
int main()
{
    int radius;
    float area;
    printf("enter the value of radius: ");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("Area of circal is %f",area);


    return 0;
}