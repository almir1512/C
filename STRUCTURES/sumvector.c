#include<stdio.h>
typedef struct vector{
int x,y;

}vect;

vect sumVector(vect v1,vect v2)
{
    vect result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    
    return result;
}
    int main()
{
    vect v1,v2,sum;
    v1.x=30;
    v1.y=20;
    printf("X div = %d",v1.x);
    printf("\nY div = %d",v1.y);
    
    v2.x=10;
    v2.y=23;
    printf("\n\nsecond one");
    printf("\nX div = %d",v2.x);
    printf("\nY div = %d",v2.y);
    sum=sumVector(v1,v2);
    printf("\n\nSUM\n");
    printf("X div = %d",sum.x);
    printf("\nY div = %d",sum.y);
    
    return 0;
}