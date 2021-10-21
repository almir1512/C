#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    c=a<<3;
    printf("the LEFT SHIFT value is %d",c);

    c=b>>2;
    printf("\nthe RIGHT SHIFT value is %d",c);

    printf("\nthe   AND   operation value is %d",a&b);

    printf("\nthe   OR   operation value is %d",a|b);

    printf("\nthe   XOR   operation value is %d",a^b);

    getch();
}


