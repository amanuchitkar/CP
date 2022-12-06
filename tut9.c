#include <stdio.h>
#define pi 3.14
int main()
{
    int a = 3;
    float b = 7.889;

    const float c = 897;
    // c=923;

    // pi=3.1469;

    // printf("The value of a is %d and the value of b is %f\n",a,b);
    printf("%0.3f\n", b);
    printf("%6.2f\n", b);
    printf("%-16.2fthis", b);
    // %c -> char
    // %d -> intiger
    // %f -> float
    // %l -> long
    // %lf -> double
    // %LF -> long double
    return 0;
}