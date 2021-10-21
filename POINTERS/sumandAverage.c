#include<stdio.h>
void sumandAverage(int a,int b,int *sum,float *avg);

int main()
{
    int i=3,j=4,sum;
    float avg;
    sumandAverage(i,j,&sum,&avg);  //call by reference
    printf("SUM = %d",sum);
    printf("\nAVERAGE =%f",avg);
    return 0;
}
void sumandAverage(int a,int b,int *sum,float *avg)
{
    *sum=a+b;
    *avg=(float)*sum/2;
}
