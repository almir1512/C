#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int main()
{
    int number,guess,a=1;
    srand(time(0));
    number=rand()%100 + 1;

    do
    {
        printf("\nGuess any number (0 to 100) : ");
        scanf("%d",&guess);

        if(guess<number)
        {
            printf("Higher number please!");
        }
        else if(guess>number)
        {
            printf("Lower number please!");
        }
        else
        {
            printf("CONGRATULATIONS!\nyou have guessed it in %d attempts",a);
        }
        a++;
    } while (guess!=number);

    return 0;
}
