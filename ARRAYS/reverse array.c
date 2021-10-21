#include <stdio.h>
void revArr(int *arr, int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    revArr(arr, 7);
    for(int i=0;i<7;i++)
    {
        printf("\nindex %d = %d",i,arr[i]);
    }
    return 0;
}
void revArr(int *arr, int n)
{
    for (int i = 0; i < n/2; i++) //it reverses the values six times as per loop
                                  //so the reversed values get reverse again
                                  //and hence same array series is printed
    // ** you need to reverse it only upto half of its total strength **
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
