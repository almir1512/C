#include<stdio.h>
#include<string.h>
typedef struct complex{
int real;
int img;
}comp;

void display(comp c)
{
    printf("\nReal part = %d",c.real);
    printf("\nImaginary part = %d",c.img);
}
    int main()
{
    comp no[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the real part = ");
        scanf("%d",&no[i].real);

        printf("Enter the imaginary part = ");
        scanf("%d",&no[i].img);

    }
    for(int i=0;i<5;i++)
    {
        display(no[i]);
    }
    return 0;
}