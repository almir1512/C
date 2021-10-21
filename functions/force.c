#include<stdio.h>
float force(float mass);

    int main()
{
    float m;
    printf("enter the mass : ");
    scanf("%f",&m);
    printf("Force = %.2f",force(m));  // .2 means till 2 decimals
    return 0;
}

float force(float mass)
{
    float result=mass*9.8;
    return result;
}
