#include <stdio.h>

int main()
{
    int radius, height;
    float pi = 3.1459;

    printf("The value of radius is: ");
    scanf("%d", &radius);

    printf("Area of circle is: %f\n", pi * radius * radius);

    printf("The height of cylinder is: ");
    scanf("%d", &height);
    
    printf("Area of cylinder is: %f", pi * radius * radius * height);

    return 0;
}