#include<stdio.h>
    void printTable(int *arr,int num,int n)
    {
        printf("Multiplication Table of %d\n",num);
        for(int i=0;i<n;i++)
        {
            arr[i]=num*(i+1);
        }
        for(int i=0;i<n;i++)
        {
            printf("%d X %d = %d\n",num,i+1,arr[i]);
        }
        printf("*****************************************\n");
    }
    int main()
{
    int m,n;
    printf("Enter the no of rows and columns : ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=1;i<=m;i++)
    {

            printTable(arr[i-1],2,n);

    }

    return 0;
}
