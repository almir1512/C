#include<stdio.h>
typedef struct vector{
int x,y;

}vect;
    int main()
{
    vect v1,v2;
    v1.x=30;
    v1.y=20;
    printf("X div = %d",v1.x);
    printf("\nY div = %d",v1.y);
    v2.x=10;
    v2.y=23;
    printf("\n\nsecond one");
    printf("\nX div = %d",v2.x);
    printf("\nY div = %d",v2.y);
    return 0;
}