#include<stdio.h>

    int main()
{
    int students=5;
    int subjects=5;

    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        printf("\nEnter the marks of student %d in subject %d : ",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }

     for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        printf("\nThe marks of student %d in subject %d is : %d ",i+1,j+1,arr[i][j]);
        }
    }



    return 0;
}
