#include<stdio.h>
void strcpy(char *str2,char *str1,int count)
{
    int count =0;
    for (int i = 0 ; str1[i] != '\0' && str2[i] != '\0' ; i++) {
    str2[i] = str1[i];
    count++;
    }
}
    int main()
{
    char str1[]="ALMIR";
    char str2[50];
    printf("String 1 = %s",str1);
    printf("\nString 2 = %s",str2);

    strcpy(str2,str1,0);
    printf("\nAFTER STRCPY");
    printf("\n\nString 1 = %s",str1);
    printf("\nString 2 = %s",str2);
    return 0;
}
