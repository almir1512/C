#include <stdio.h>
void pattern(int a);
int main()
{
    int a = 5;
    pattern(a);
    return 0;
}
void pattern(int a)
{
    if(a==1)
    {
        printf("*\n");
        return;
    }
   else {pattern(a-1);}
    for (int i = 0; i < (2 * a - 1); i++)

    {
        printf("*");
    }
    printf("\n");
}
