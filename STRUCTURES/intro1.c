#include<stdio.h>
#include<string.h>
struct student{
int rollno;
float stipend;
char name[20];
};
    int main()
{
    struct student st1,st2;
    st1.rollno = 100;
    strcpy(st1.name,"ALMIR");

    printf("%d. ",st1.rollno);
    printf("%s",strcpy(st1.name,"ALMIR"));

    printf("enter the name of Student 2 : ");
    gets(st2.name);
    printf("Enter the roll no. of Studnet 2: ");
    scanf("%d",st2.rollno);

    
    return 0;
}
