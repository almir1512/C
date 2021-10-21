#include<stdio.h>

    int main()
{
    int a,n,product=1;
    printf("enter n! = ");
    scanf("%d",&n);

    /*  print 1,2,3,...,n
        1*2*3*...*n --> assignment operator
        print final product
    */

    for(a=n;a>=1;a--)  //for(a=1;a<=n;a++) -->same
    {
       product*=a;
    }
    printf("%d! = %d",n,product);
    return 0;
}
