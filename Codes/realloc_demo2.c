#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;

    // Step1 - Alocate the memory

    Arr = (int *)malloc(5 * sizeof(int));           //20

    // Step2 - Use the memory

    Arr = (int *)realloc(Arr , 3*sizeof(int));      //12

    // Step3 - Free the memory
    free(Arr);

    return 0;
}