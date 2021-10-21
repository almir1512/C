#include <stdio.h>
// to show whether a character is uppercase or lowercase
int main()
{
    char a ;
    printf("enter any character :");
    scanf("%c", &a);
    int c = a + 0;  //use ASCII values
    if (c >= 97 && c <= 122)   //97-122 = a-z
    {
        printf("Lowercase");
    }
    else if (c >= 65 && c <= 90) //65-90 = A-Z
    {
        printf("Uppercase");
    }
    else
    {
        printf("invalid character");
    }
    return 0;
}
