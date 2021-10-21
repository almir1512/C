#include<stdio.h>

    int main()
{
    int a,b,ch;
    printf("enter two integers: ");
    scanf("%d %d",&a,&b);

    printf("1.Addition \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");

    printf("Enter your choice of operation: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
    ch=a+b;
    printf("Addition = %d",ch);
        break;
    case 2:
    ch=a-b;
    printf("Subtraction = %d",ch);
        break;
    case 3:
    ch=a*b;
    printf("Multiplication = %d",ch);
        break;

    case 4:
    ch=a/b;
    printf("Division = %d",ch);
        break;

    default:
    printf("Invalid operation chosen!");
        break;
    }
    return 0;
}
