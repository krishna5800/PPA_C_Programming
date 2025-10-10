#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *P = NULL;

    int *Q = NULL;

    P = &(Arr[1]);

    Q = &(Arr[4]);

    //P + Q;  // Not allowed their is error 

    P = P + 3;  // Allowed

    printf("Data pointed by P is : %d\n", *P);

    

    return 0;
}