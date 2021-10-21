#include<stdio.h>

/*this is a c program to read to long integers and perform addition */

int main()
{   // read two long integers and perform addition
    long a,b,c;
    printf("enter two long numbers : ");
    scanf("%u %u",&a,&b);

    // read two float and perform division
    float ab,bc,ac;
    printf("enter two floating numbers : ");
    scanf("%f %f",&ab,&bc);

    // read one integer and one double and perform multiplication
    int a1;double b1,c1;
    printf("enter an integer and a double number : ");
    scanf("%d %lf",&a1,&b1);

    // read two integer and perform modulus
    int abc,lmn,result;
    printf("enter two integers: ");
    scanf("%d %d",&abc,&lmn);

    c=a+b;
    printf("\naddition of long integers is : %u",c);

    ac=ab/bc;
    printf("\ndivision of two floating numbers is : %f",ac);

    c1=a1*b1;
    printf("\nmultiplication is : %lf",c1);

    result=abc%lmn;
    printf("\nremainder is : %d",result);
    return 0;
}
