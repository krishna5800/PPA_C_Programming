// Accept N numbers and a value K. Display all numbers that contain exactly K digits. 
// Negative numbers count digits ignoring the sign

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize, int iFreq)
{
    int iDigit = 0;
    int iNo = 0;
    int iCnt = 0;

    printf("Result : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        iDigit = 0;

        if(iNo == 0)
        {
            iDigit++;
        }

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            iDigit++;
            iNo = iNo/10;
        }

        if(iDigit == iFreq)
        {
            printf("%d  ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0, iNo = 0;
    int *iPtr = NULL;

    printf("Enter number of elements :\n");
    scanf("%d", &iLength);

    printf("Enter frequency for digits :\n");
    scanf("%d", &iNo);


    // Step 1 : Allocate memory
    
    iPtr = (int *)malloc(iLength * sizeof(int));

    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n", iLength);

    // Step 2 : Use the allocated memory

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : \n", iCnt+1);
        scanf("%d", &iPtr[iCnt]);
    }

    Digits(iPtr, iLength, iNo);

    // Step 3 : Free the allocated memory
    free(iPtr);

    return 0;
}