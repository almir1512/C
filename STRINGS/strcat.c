#include<stdio.h>

    int main()
{
    char a[15]="ALMIR";
    char b[]="NOORI";
    strcat(a,b);
    //the value gets stored in the first argument
    printf("the value of a is %s",a);
    return 0;
}
