#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the No. of Elements : \n");
    scanf("%d", &length);

    // Step1 - Alocate the memory

    Arr = (int *)calloc(length , sizeof(int));
    
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets successfully allocated\n");
    }
    
    // Step2 - Use the memory

    // Step3 - Free the memory

    free(Arr);

    return 0;
}