#include<stdio.h>
struct employee{
 int code;
 float salary;
 char name[20];
};
    int main()
{
    struct employee microsoft[25];
    microsoft[0].code=10;
    printf("%d",microsoft[0].code);
    return 0;
}
