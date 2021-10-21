#include<stdio.h>

    int main()
{
    int num,a,b;
    char ch;
    do{
    printf("Enter any two integers : ");
    scanf("%d %d",&a,&b);
    printf("\n1.Addition");
    printf("\n2,num.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter your choice of operation: ");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
        num=a+b;
        printf("Addition = %d",num);
        break;
        case 2:
        num=a-b;
        printf("Subtraction = %d",num);
        break;
        case 3:
        num=a*b;
        printf("Multiplication = %d",num);
        break;
        case 4:
        num=a/b;
        printf("Division = %d",num);
        break;
        default:
        printf("Invalid choice!");
        break;
    }
        printf("\nDo you wish to continue? (y,n) : ");
        scanf(" %c",&ch);
    }
    while(ch=='Y'||ch=='y');

    return 0;
}
