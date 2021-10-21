#include<stdio.h>
#include<string.h>

    int main()
{
    char str[10];
    char str1[10];
    printf("Enter the string :");
    gets(str);

    

    strcpy(str1,str);
    strrev(str1);

    if(!strcmp(str1,str))
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }


    return 0;
}