#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you , char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='s' && comp=='w')
    {
        return 1;
    }
    else if(you=='w' && comp=='s')
    {
        return -1;
    }
    if(you=='s' && comp=='g')
    {
        return -1;
    }
    else if(you=='g' && comp=='s')
    {
        return 1;
    }
    if(you=='w' && comp=='g')
    {
        return 1;
    }
    else if(you=='g'&& comp=='w')
    {
        return -1;
    }

}
    int main()
{
    char you,comp,c;
do{

    srand(time(0));
    int number=rand()%9 + 1;

    if(number<=3)
    {
        comp = 's';
    }

    else if(number>3 && number <=6)
    {
        comp = 'w';
    }
    else{
        comp = 'g';
    }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun : ");
    scanf(" %c",&you);

    int result = game(you,comp);
    printf("You chose %c and computer chose %c.\n",you,comp);
    if(result==0)
    {
        printf("Game draw !");
    }
    else if(result==1)
    {
        printf("You Win !");
    }
    else
    {
        printf("You Lost !");
    }
    printf("\n\nDo you want to continue (y/n) :");
    scanf(" %c",&c);
}while(c=='Y' || c=='y');
    return 0;
}
 q q
