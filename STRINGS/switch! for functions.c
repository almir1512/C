#include<stdio.h>
#include<string.h>
    int main()
{
    int a;
    char ch;
    char str1[100];
    char str2[100];
 do{
     printf("\n1.Length of string");
     printf("\n2.Compare two strings");
     printf("\n3.Copy string");
     printf("\n4.Reverse of string");
     printf("\n5.String is palindrome or not");

     printf("\n\nEnter your choice of operation(1-4): ");
     scanf("%d",&a);
       switch(a)
       {
       case 1:
        printf("\nEnter a string : ");
        scanf("%s",&str1);
        int i=strlen(str1);
        printf("The length of string = %d",i);
       break;

       case 2:
        printf("Enter a String1: ");
        scanf("%s",&str1);
        printf("Enter a String2: ");
        scanf("%s",&str2);
        int j=strcmp(str1,str2);
        if(j==0)
        {
            printf("They are equal");
        }
        else{
            printf("They are not equal");
        }

       break;

       case 3:
        printf("Enter a String1: ");
        scanf("%s",&str1);
        printf("Enter a String2: ");
        scanf("%s",&str2);
        printf("\nString Before Copy:\nString1=\"%s\",String2=\"%s\"\n",str1,str2);
        strcpy(str2,str1);
        printf("-----------------------------------------------\n");
        printf("\"We are copying string String1 to String2\" \n");
        printf("-----------------------------------------------\n");
        printf("String After Copy:\nString1=\"%s\", String2=\"%s\"\n\n",str1,str2);

       break;

       case 4:
        printf("Enter a String1: ");
        scanf("%s",&str1);
        strrev(str1);
        printf("The reverse string is %s ",str1);

       break;

       case 5:
       printf("Enter a String1: ");
       scanf("%s",&str1);
       strcpy(str2,str1);
       strrev(str1);
       if(!strcmp(str1,str2))
       {
           printf("Palindrome");
       }
       else{
           printf("Not a Palindrome");
       }
       break;
       default:
           printf("Invalid choice !");
       break;

       }
        printf("\n\nDo you want to continue (y/n): ");
        scanf(" %c",&ch);

    }while(ch=='Y'||ch=='y');


    return 0;
}
