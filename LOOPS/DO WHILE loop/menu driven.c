#include <stdio.h>

int main()
{
    int a, b, ch;
    char a1;

    do{
    printf("\nenter any two integers: ");
    scanf("%d %d", &a, &b);
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");

    printf("\n\nEnter your choice of operation (1-5): ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        ch=a+b;
        printf("Addition is %d",ch);
        break;
    case 2:
        ch=a-b;
        printf("Subtraction is %d",ch);
        break;
    case 3:
        ch=a*b;
        printf("Multiplication is %d",ch);
        break;
    case 4:
        ch=a/b;
        printf("Division is %d",ch);
        break;

    default:
        printf("Invalid choice of operation");
        break;
    }
   printf("\nDo you want to continue !(y/n)");
    scanf(" %c",&a1);

    }while(a1=='y' || a1=='Y');
    return 0;
}


