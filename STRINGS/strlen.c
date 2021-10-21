#include<stdio.h>
#include<string.h>

    int main()
{
    char *str="almir";
    int a = strlen(str);

    // excluding the nulll character (\0)
    
    printf("the length of string is %d",a);
    return 0;
}