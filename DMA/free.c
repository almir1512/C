#include<stdio.h>

    int main()
{
    int *ptr;
    int *ptr1;
    
    ptr = (int *) malloc(60000 * sizeof(float));
    for (int i=0;i<6;i++)
    {
        ptr1 = (int *) malloc(60000 * sizeof(float));
        printf("\nEnter the %d element :",i+1);
        scanf("%f",&ptr[i]);
        free(ptr1);
    }
    for(int i=0;i<6;i++)
    {
        printf("\n%d element : %f",i+1,ptr[i]);
    }
    return 0;
}