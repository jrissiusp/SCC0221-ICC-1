#include<stdio.h>


int main()
{
    char figura;
    float a, b, area, pi;
    pi = 3.14;
    scanf("%c", &figura);
    switch(figura)
    {
        
        case 'q' :scanf("%f", &a); area = a*a; printf("%.2f", area); break;
        case 'r': scanf("%f %f", &a, &b); area= a*b; printf("%.2f", area); break;
        case 't': scanf("%f %f", &a, &b);area = a*b/2; printf("%.2f", area); break;
        case 'c': scanf("%f", &a); area= pi*a*a; printf("%.2f", area); break;
    }
    return 0;
}