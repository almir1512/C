#include <stdio.h>

int main()
{
    int i = 20;
    int *j ;
    j= &i;


    //value of i
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %d\n", *(&i));
    //value of j
    printf("the value of j is %d\n",j);
    printf("the value of j is %d\n",&i);
    printf("the value of j is %d\n",*(&j));
    //address of i
    printf("the address of i is %u\n",j);
    printf("the address of i is %u\n",&i);

    //address of j
    printf("the address of j is %u\n",&j);

    return 0;
}
