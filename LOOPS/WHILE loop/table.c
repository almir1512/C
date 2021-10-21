#include<stdio.h>

    int main()
{
   int a=1,num;
   printf("Enter n : ");
   scanf("%d",&num);
    while(a<=10)
    {
        printf("%d X %d = %d\n",num,a,a*num);
        a++;
    }
    return 0;
}
