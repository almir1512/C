#include <stdio.h>
void printAdd(int a[], int count);

int main()
{
    int arr[]={45,77,64,545,232,45,78};
    printAdd(&arr,7);

    printAdd(&arr,7);
    return 0;
}

// void printAdd(int *a, int count)
// {
//     for (int i=0; i < count; i++)
//     {
//         printf("\nThe value of element %d is %d", i+1,*(a+i));
//     }
// }

void printAdd(int a[], int count)
{
    for (int i=0; i < count; i++)
    {
        printf("\nThe value of element %d is %d", i+1,a[i]);
    }
    a[2]= 2345; // value of the element changes because address is passed.
}
