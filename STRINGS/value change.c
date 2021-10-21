#include<stdio.h>
#include<string.h>
    int main()
{
    char *str="ALMIR NOORI";
    // if char str[]="ALMIR" then,
    // there is an error
    //there is no re-initialization
   str="ALMIR NOORI";

   puts(str);


    return 0;
}
