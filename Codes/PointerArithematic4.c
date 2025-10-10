#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *P = NULL;

    int *Q = NULL;

    P = &(Arr[1]);

    Q = &(Arr[4]);

    printf("Result of substraction is : %ld\n", Q-P);   //Allowed

    Q = Q-2;

    printf("Data pointed by Q is : %ld\n", *Q);        //Allowed

    return 0;
}