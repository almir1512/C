#include<stdio.h>
#include<string.h>
    int main()
{
    char a[15]="ALMIR";
    char b[]="NOORI";
    int val = strcmp(a,b);
    printf("the value is %d",val);     
    return 0;
}