#include<stdio.h>
#include<conio.h>

void main()
{
char a;
int c;
long d;
float e;
double f;
long double g;
unsigned char h;
printf("enter any signed character : ");
scanf("%c",&a);

printf("enter any integer : ");
scanf("%d",&c);
printf("enter any long integer : ");
scanf("%ld",&d);
printf("enter any floating point number : ");
scanf("%f",&e);
printf("enter any double number : ");
scanf("%lf",&f);
printf("enter any long double number : ");
scanf("%Lf",&g);
printf("enter any unsigned character : ");
scanf("%c",&h);

printf("\n \n the entered signed character is : %c",a);
printf("\n the entered integer is :%d",c);
printf("\n the entered long integer is :%ld",d);
printf("\n the entered floating no. is : %f",e);
printf("\n the entered double no. is : %lf",f);
printf("\n the entered long double no.  is : %Lf",g);
printf("\n the entered unsigned character is :%c",h);

getch();

}
