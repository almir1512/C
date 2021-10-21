#include<stdio.h>
#include<string.h>
int main()
{
int j, k;
char *z="Hello ";
k = strlen(z);
*z = z[k];
for(j=0; j<=k; j++)
{
printf("%s ", z);
z++;
}
printf("\n", z);
return 0;
}
