#include<stdio.h>

struct Demo 
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
};

int main()
{
    printf("Size of Structure Demo is : %lu", sizeof(struct Demo));
    
    return 0;
}