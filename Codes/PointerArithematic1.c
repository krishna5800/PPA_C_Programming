#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *P = NULL;

    int *Q = NULL;

    P = &(Arr[1]);

    Q = &(Arr[4]);

    printf("Data fetched by P is : %d\n", *P);  //21

    printf("Data fetched by Q is : %d\n", *Q);  //111
    return 0;
}