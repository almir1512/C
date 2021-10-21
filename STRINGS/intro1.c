    #include<stdio.h>

    int main()
{
    char str[]="ALMIR";
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }

    char *ptr1="NOORI";
    printf("\n%s",ptr1);

    return 0;
}
