#include<stdio.h>

int main()
{
    double Arr[] = {10.0,20.0,30.0,40.0};

    printf("Size of Arr : %lu\n", sizeof(Arr));  //32

    Arr++; //Error
    //in all programming language the base address of array because for compiler the only thing our compiler have for array is base address

    return 0;
}