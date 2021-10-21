
#include <stdio.h>

int main()
{

    int rows,cols,a[100][100],b[100][100],transA[100][100],transB[100][100],sum[100][100];

    printf("Enter the no. of rows in matrix : ");
    scanf("%d",&rows);
    printf("Enter the no. of columns in matrix : ");
    scanf("%d",&cols);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("Enter the element of first matrix [%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("Enter the element of second matrix [%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nEntered first matrix is : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           printf("%d\t",a[i][j]);
           if(j==(cols-1))
           printf("\n");

        }
    }
    printf("\nEntered second matrix is : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           printf("%d\t",b[i][j]);
           if(j==(cols-1))
           printf("\n");

        }
    }


    // computing transpose of a
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            transA[j][i]=a[i][j];

        }
    }
    // computing transpose of b
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            transB[j][i]=b[i][j];

        }
    }



    // printing the transpose of A
    printf("\nTranspose of A: \n");
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
           printf("%d\t",transA[i][j]);
           if(j==(rows-1))
           printf("\n");

        }
    }
        // printing the transpose of A
    printf("\nTranspose of B: \n");
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
           printf("%d\t",transB[i][j]);
           if(j==(rows-1))
           printf("\n");

        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           sum[i][j]=transA[i][j]+transB[i][j];
        }
    }
    printf("\nTHE SUM OF MATRIX IS  : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d\t",sum[i][j]);

        }
        printf("\n");
    }





    return 0;
}
