
#include <stdio.h>

int main() {

    int rows,cols,a[100][100],b[100][100],sum[100][100];

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
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
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
