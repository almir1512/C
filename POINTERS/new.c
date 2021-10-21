#include<stdio.h>
void adress(int i);

int main()

{
   int i=4;


   printf("the value of the variable i is %d\n",i);
   adress(i);
   printf("\nthe address of the variable i is %u",&i);
   return 0;

}
void adress(int i)
{
    printf("\nthe address of the variable i is %u",&i);
}


