#include<stdio.h>
int strlen (int *st)
{
    char *ptr=st;
    int length = 0;
    while(*ptr!='\0')
    {
        length++;
        ptr++;
    }
    return length;

}
    int main()
{
    char st[50];
    printf("Enter the string :");
    gets(st);
   int l =  strlen(st);
    printf("the length of string is %d",l);
    return 0;
}
