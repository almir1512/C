#include<stdio.h>

    int main()
{
    int a;
    int arr[20];
    for(int i=0;i<3;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {

        a += arr[i];

    }
    printf("the addition of the elemnts in the array : %d",a);


    return 0;
}
