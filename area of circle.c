#include<stdio.h>
#define pie 3.14  //define the value of pie
// area of circle and volume of cylinder

int main()
{
    int a,b,d,e,result; double c;
    printf("Enter radius of circle:");
    scanf("%d",&a);
    c=pie*a*a;
    printf("\nthe area of circle is %lf sq.units",c);

    printf("\nEnter radius and height of cylinder:");
    scanf("%d %d",&d,&e);
    result=pie*d*d*e;
    printf("\nthe volume of cylinder is %d sq.units",result);
return 0;

}
