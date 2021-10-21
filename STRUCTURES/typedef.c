#include<stdio.h>
#include<string.h>

typedef struct employee{     // typedef creates a shortname to the sturcture
int code;
float salary;
char name[20];
}emp;
    int main()
{
    emp e1,e2;
    emp *ptr;

    ptr=&e1;
    ptr->code=1;
    (*ptr).salary=24.355;
    strcpy(ptr->name,"ALMIR");

    printf("Code = %d",e1.code);
    return 0;
}
