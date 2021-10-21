#include<stdio.h>
int max(int a,int b);

    int main()
{
    int a,b,c;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Invalid input!");
    }

else{
    printf("The maximum no is %d", max(a,b));
    return 0;
    }
}
int max(int a,int b)
{
    int c = a>b?a:b;
    return c;
}
