#include<stdio.h>

int main()
{
    
int a1=1,space,n,i,j;
 
    printf("Enter number of lines:\n");
    scanf("%d",&n);
 
    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-i;space++)
            {
            printf("  ");
                
            }
            
 
        for(j=0;j<=i;j++)
        {
            if (j==0 || i==0)
              {  a1 = 1;  }
            else
              {  a1=a1*(i-j+1)/j;   }
 
            printf("%4d",a1);
        }
        printf("\n");
    }
    return 0;
 
}