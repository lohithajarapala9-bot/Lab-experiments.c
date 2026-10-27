#include <stdio.h>
#include<math.h>
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    if (n < 0)
        printf("Square root of a negative number is not real.\n");
    else
        printf("Square root of %.2lf = %.2lf\n", n, sqrt(n));
    return 0;
}
