
#include <stdio.h>

int main()
{
    int a = 6;

    int *j;
    j = &a;  // the value of *j is 6

    int **ptp;
    ptp = &j;  // the value of *ptp is j.

    printf("the value of i is %d",**ptp);
    return 0;
}
