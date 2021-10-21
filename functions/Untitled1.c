
#include <stdio.h>

int func1();
int func2();
int main() {

    printf("Result : %d\n",func1());  //function 1

    int a,b,c,d;
    printf("\n--function 2--");
    printf("\nEnter the values: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    printf("Result : %d",func2(a,b,c,d));   //function 2
    return 0;
}
int func1()
{
    int a,b,c,d;
    printf("--Function 1--");
    printf("\nEnter the values: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int res=(a*b)/c-(d*d);
    return res;
}
int func2(int a,int b,int c,int d)
{
    int res=(a*b)/c-(d*d);
    return res;
}
