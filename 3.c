#include<stdio.h>
#include<conio.h>
void main()
{
int i=10,j=10,z,x,a=15,b=15,c,d,e;

z=++i;  //pre-increment
printf("preincremented i value of z is %d",z);

x=j++;
printf("\npostincremented j value of x is %d",z);
printf("\nvalue of j is %d",j);

c=(++a)-(b--);
printf("\nvalue of c is %d",c);

d=(a--)+(b);
printf("\nvalue of d is %d",d);

e=a-(b--);
printf("\nvalue of e is %d",e);

}
