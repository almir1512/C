#include <stdio.h>
void display(int *a, int j, int k);

int main()
{
    int j, k;
    printf("Enter the rows and column: ");
    scanf("%d %d",&j ,&k);

    int arr[j][k];
    for (int i = 0; i < j; i++)
    {
        for (int i1 = 0; i1 < k; i1++)
        {
            printf("enter the values to be put in array : ");
            scanf("%d", &arr[j][k]);
        }
    }
    display(arr,&j,&k);
}
void display(int *arr, int *j, int  *k)
{
    for (int i = 0; i < *j; i++)
    {
        for (int i1 = 0; i <  *k; i1++)
        {
            printf("%d\t",arr);
        }
        printf("\n");
    }
}
