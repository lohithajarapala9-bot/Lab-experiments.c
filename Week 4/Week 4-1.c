#include <stdio.h>
int main()
{
    int A, B, C, D, E, F, G, i, J, r1, r2, r3;
    printf("Enter values of A, B, C, D, E, F, G: ");
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &G);
    /* a */
    r1 = A + B * C + (D * E) + F * G;
    printf("a) A+B*C+(D*E)+F*G = %d\n", r1);
    /* b */
    r2 = A / B * C - B + A * D / 3;
    printf("b) A/B*C-B+A*D/3 = %d\n", r2);
    /* c */
    r3 = A++ + B-- - A;
    printf("c) A+++B---A = %d\n", r3);
    /* d */
    printf("Enter value of i: ");
    scanf("%d", &i);
    J = (i++) + (++i);
    printf("d) J = (i++)+(++i) = %d\n", J);
    return 0;
}
