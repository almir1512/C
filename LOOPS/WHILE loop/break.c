#include<stdio.h>

    int main()
{
    int i=1;
   while(i<=4)
   {
       if(i==3)
       {
           break;
       }
       printf("\n%d",i);
       i++;
   } 
    return 0;
}