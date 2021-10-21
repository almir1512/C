#include<stdio.h>
#include<stdlib.h>
    int main()
{
    int *ptr;
    ptr=(int *)malloc(6*sizeof(int));

    for(int i=0;i<5;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&ptr[i]);

    }

    for(int i=0;i<5;i++)
    {
        printf("\n%d Element : %d",i+1,ptr[i]);


    }
    ptr = realloc(ptr,10*sizeof(int));

    for(int i=0;i<10;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("\n%d Element : %d",i+1,ptr[i]);
    }

    return 0;
}
