#include<stdio.h>

int main()
{
    float A, B, C;
    scanf("%f %f", &A, &B);
    if ((A+B)<180 && (A+B) > 0)
    {
        C = 180 - (A+B);
        printf("%f ", C);
    }
    else
    {
        printf("Ângulos inválidos");
    }
    return 0;
}