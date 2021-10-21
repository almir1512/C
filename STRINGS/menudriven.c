#include<stdio.h>
#include<string.h>
    int main()
{
    char c;
    int num;
    char str1[20],str2[20];
    printf("Enter a string : ");
    gets(str1);
    printf("\n");
    do{
    printf("1.Length of the string\n");
    printf("2.Copy the string in another\n");
    printf("3.Reverse the string\n");
    printf("4.Compare the string\n");
    printf("\nEnter your choice of operation(1-4): ");
    scanf("%d",&num);

    switch(num)
    {
        case 1 :
        printf("\nLength of the string : %d",strlen(str1));
        break;
        case 2:
        strcpy(str2,str1);
        printf("\nCopied string : %s",str2);
        break;
        case 3:
        printf("\nReverse of the string : %s",strrev(str1));
        break;
        default:
        printf("\nInvalid choice!");
    }
    printf("\nDo you want to continue?(y/n): ");
    scanf(" %c",&c);

    }while(c=='Y'||c=='y');




    return 0;
}
