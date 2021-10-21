#include<stdio.h>

    int main()
{
    FILE *ptr;
    int num = 45;
   // ptr=fopen("sample2.txt","r");
    ptr=fopen("sample2.txt","w");
    fprintf(ptr,"the number is %d",num);
    fclose(ptr);
    return 0;
}

