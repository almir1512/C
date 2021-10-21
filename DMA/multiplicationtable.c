#include<stdio.h>

    int main()
{
    int *ptr;
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    ptr=(int *)calloc(6,sizeof(int));

    for(int i=0;i<10;i++)
    {
        printf("\n%d X %d = %d",num,i+1,num*(i+1));
    }
    ptr=realloc(ptr,15*sizeof(int));
    printf("\n\nAfter reallocation !");
    for(int i=0;i<15;i++)
    {
        printf("\n%d X %d = %d",num,i+1,num*(i+1));
    }
    return 0;
}
