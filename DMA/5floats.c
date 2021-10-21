#include<stdio.h>
#include<stdlib.h>
    int main()
{
    int *ptr;
    ptr = (int *) malloc(6 * sizeof(float));

    for (int i=0;i<6;i++)
    {
        printf("\nEnter the %d element :",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf("\n%d element : %f",i+1,ptr[i]);
    }

    return 0;
}
