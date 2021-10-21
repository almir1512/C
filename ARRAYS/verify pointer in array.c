#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr;
    ptr = &arr[0]; // or you can write ptr =arr;
    ptr+=2;
    if(ptr==&arr[2])
    {
        printf("they point to same location");
    }
    else{
         printf("they do not point to same location");
    }
    return 0;
}
