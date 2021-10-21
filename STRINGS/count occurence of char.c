#include<stdio.h>
int occur(char st[],char c)
{
    char *ptr=st;
    int count=0;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            count++;  // counter which 
        }
        ptr++;  // character moving one step ahead
    }

    return count;
}
    int main()
{
    char st[]="almir noori";
    int a = occur(st,'r');
    if(a==0)
    {
        printf("Character is not present.");
    }
    else
    {
        printf("Character is present.");
    }
    printf("\nOccurences = %d",a);
    return 0;
}