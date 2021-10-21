#include<stdio.h>

    int main()
{
    char str[50];
    printf("Enter your name : ");
    gets(str);

    printf("\nYour name is %s",str);
    return 0;
}