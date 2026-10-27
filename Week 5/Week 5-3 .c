#include<stdio.h>
#include<math.h>
int main() 
{
    float a, b, c, d, r1, r2, real, imag;
    printf("Enter coefficients a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        printf("Not a quadratic equation\n");
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) 
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", r1, r2);
    } 
    else if (d == 0) 
    {
        r1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r1);
    } 
    else 
    {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }
    return 0;
}
