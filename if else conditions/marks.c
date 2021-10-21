#include <stdio.h>

int main()
{
    int a, b, c, a1, b1, c1;
    float d;
    printf("Enter Marks");
    printf("\nMathematics: ");
    scanf("%d", &a);
    printf("Physics: ");
    scanf("%d", &b);
    printf("Biology: ");
    scanf("%d", &c);
    d = (a + b + c) / 3; //total marks is 100

    a1 = a;
    b1 = b;
    c1 = c;
     printf("Percentage = %f",d);
    if (d >= 40)
    {
        if (a1 >= 33)
        {
            if (b1 >= 33)
            {
                if (c1 >= 33)
                {
                    printf("\nPASS");
                }
                else
                {
                    printf("\nFAIL");
                }
            }
            else
            {
                printf("\nFAIL");
            }
        }
        else
        {
            printf("\nFAIL");
        }
    }
    else
    {
        printf("\nFAIL");
    }

    return 0;
}
