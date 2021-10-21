#include<stdio.h>
void almir1();
void almir2();  //function prototype
void almir3();

int main()
{
    almir1();  // function calll

    return 0;
}

void almir1()
{
    printf("\nGOOD MORNING"); // function definition 
    almir2();
}
void almir2()
{
    printf("\nGOOD AFTERNOON");
    almir3();
}
void almir3()
{
    printf("\nGOOD NIGHT");
}
