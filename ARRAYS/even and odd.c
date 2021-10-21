

#include<stdio.h>
int evenOdd(int *arr,int n)
{   printf("\nEven no: ");
    for(int i=0;i<n;i++)
    {
   if(arr[i]%2==0)
     {
       printf("\t%d",arr[i]);
     }
    }
    printf("\n\nOdd no:");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("\t%d",arr[i]);
        }
    }

}
    int main()

{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
       printf("Enter %d element : ",i+1);
       scanf("%d",&arr[i]);
    }
    evenOdd(arr,10);

    return 0;
}
