#include<stdio.h>
void slice(int *str, int m, int n)
{
    int i=0;
    while((m+i)<n)
    {
        str[i]=str[i+m];
        i++;
    }
    str[i]='\0';
}
    int main()
{
    char str[]="Almirnooridfkrfu";
    slice(str,2,5);
    printf("%s", str);

    return 0;
}
