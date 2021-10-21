
#include <stdio.h>
#include<string.h>
void main()
{
    int choice;
    int a, n;
    char c;
    char str[10];
    char str1[10];

    int number[30];

    printf("\n1. Palindrome or not.");
    printf("\n2. the * pattern");
    printf("\n3. Sorting in descending order.");
    printf("\n\nEnter your choice(1-3) : ");
    scanf("%d",&choice);
    switch (choice)
 {
    case 1:

    printf("\nEnter the string :");
   scanf("%s",&str);

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

    break;

    case 2:
        for (int i = 1; i <= 5; i++)
        {
            for (int j = i; j <= 5; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    break;


    case 3:



    printf("Enter the value of N\n");
    scanf("%d", &n);

    printf("Enter the numbers \n");
    for (int i = 0; i < n; ++i)
        scanf("%d", &number[i]);

    //  sorting begins

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are given below\n");

    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    break;
    default:
        printf("Invalid choice !");
}


}
