#include<stdio.h>
#include<stdlib.h>
    int main()
{
    int *ptr;
    int n;
    printf("Enter how many integers you want to enter :");
    scanf("%d",&n);
    ptr = (int  *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%d Element : %d",i+1,ptr[i]);

    }



    return 0;
}
