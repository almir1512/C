#include<stdio.h>
#include<string.h>

typedef struct employee{
int code;
float salary;
char name[20];
}emp;
void show ( emp e1)
{
    printf("The code of employee 1 : %d\n",e1.code);
    printf("The name of employee 1 : %s\n",e1.name);
    printf("The salary of employee 1 : %.3f\n",e1.salary);

    e1.code=100;  // the copy of the structure is passed to the function and hence the value is not changed
}
int main()
{
    emp e1,e2;
    emp *ptr;

    ptr=&e1;
    ptr->code=1;
    (*ptr).salary=24.355;
    strcpy(ptr->name,"ALMIR");
    show(e1);
    printf("the code of employee 1 is %d",e1.code);
    return 0;
}
