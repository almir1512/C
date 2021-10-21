#include<stdio.h>
encrypt(char *st)
{
    char *ptr = st;
    while(*ptr != '\0')
    {
        *ptr=*ptr+1; // one ascii value ahead
        ptr++;  // one character ahead
    }
}
decrypt(char *st)
{
    char *ptr=st;
    while(*ptr!='\0'){
        *ptr=*ptr-1; //one ascii value down
        ptr++; //one character ahead
    }
}
    int main()
{
    char st[]="i love you";
    encrypt(st);
    printf("Encrypted code : %s",st);
    decrypt(st);
    printf("\n\n Decrypted code : %s",st);
    return 0;
}
