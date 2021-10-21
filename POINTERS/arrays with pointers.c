#include<stdio.h>

    int main()
{
    int a;
    int marks[4];
    int *ptr=&marks[0];
    for(int i=0;i<4;i++)
    {
        printf("Enter the marks of %dth students : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++)
    {
        printf("\nStudent %d marks : %u",i+1,marks[i]);
    }
    return 0;
}
