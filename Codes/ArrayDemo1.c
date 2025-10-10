#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};
    int Brr[] = {10,20,30,40,50};
    int Crr[6] = {10,20,30};

    printf("Size off Arr is : %lu\n", sizeof(Arr));  //16
    printf("Size off Brr is : %lu\n", sizeof(Brr));  //20
    printf("Size off Crr is : %lu\n", sizeof(Crr));  //24

    return 0;
}