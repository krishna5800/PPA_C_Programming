#include<stdio.h>

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.78f; // if we don't write f it is considered as double internally
    double dValue = 98.564323;

    printf("%c \n", cValue);
    printf("%d \n", iValue);
    printf("%f \n", fValue);
    printf("%lf \n", dValue);

    return 0;
}