#include<stdio.h>
float almir(int a);

    int main()
{
    int a;
    printf("Enter temperature (celcius) : ");
    scanf("%d",&a);
    printf("Temperature = %f fahrenheit",almir(a));
    return 0;
}

float almir(int a)
{
    int result=(a*1.8)+32;
    return (float)result;
}
