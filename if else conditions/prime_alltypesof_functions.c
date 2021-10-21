
#include <stdio.h>
void fun1(){
   int a;
    printf("Enter a positive integer:");
    scanf("%d",&a);
    int flag=0;
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
             flag=1;
            break;
        }
    }
    if(a==1)
    {
        printf("It is neither prime nor composite.");
    }
    
    else{
        if(flag==0){
            printf("It is a prime number.");
        }
        else{
            printf("It is composite number.");
        }
    } 
}

int fun2(){
    int a;
    printf("Enter a positive integer:");
    scanf("%d",&a);
    int flag=0;
    if(a==1){
        printf("It is neither prime nor composite.");
    }
    else{
      for(int i=2;i<a/2;i++)
      {
        if(a%i==0)
        {
             flag=1;
             
            break;
        }
      }
      return flag;
    }

    
}
void fun3(int a,int flag){
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
             flag=1;
            break;
        }
    }
    if(a==1)
    {
        printf("It is neither prime nor composite.");
    }
    
    else{
        if(flag==0){
            printf("It is a prime number.");
        }
        else{
            printf("It is composite number.");
        }
    }
}
int fun4(int a,int flag){
    for(int i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
             flag=1;
            break;
        }
    }
   return flag ;
}


int main() {
         /*   //function 2
        int flag=fun2();
        if(flag==0){
            printf("It is a prime number.");
        }
        else{
            printf("It is composite number.");
        }   
        
        //function 3
        int a;
        printf("Enter a positive integer:");
        scanf("%d",&a);
   
        fun3(a,0);
        */
        
        //function 4
         int a;
         printf("Enter a positive integer:");
         scanf("%d",&a);
        if(a==1)
         {
        printf("It is neither prime nor composite.");
         }
        
        else{
            int flag=fun4(a,0);
           if(flag==0){
            printf("It is a prime number.");
          }
           else{
            printf("It is composite number.");
          }
            } 
        
        
        
    
    
    return 0;
    
}