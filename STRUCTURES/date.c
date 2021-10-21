#include<stdio.h>
#include<string.h>
typedef struct date{
    int date;
    int month;
    int year;

}date;
void display(date a){
    printf("The date is: %d/%d/%d.",a.date,a.month,a.year);
}
int compare(date a,date b)
{
    if(a.year<b.year)
    {
        return -1;
    }
     if(a.year>b.year)
    {
        return 1;
    }
    if(a.month<b.month)
    {
        return -1;
    }
     if(a.month>b.month)
    {
        return 1;
    }
     if(a.date<b.date)
    {
        return -1;
    }
     if(a.date<b.date)
    {
        return 1;
    }
    return 0;
}

int main()
{
    date a1={1,2,12};
    date a2={3,5,15};
    display(a1);
    display(a2);
    int c= compare(a1,a2);

    printf("\nComparison returns %d",c);
    

    return 0;
}