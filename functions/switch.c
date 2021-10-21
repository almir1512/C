
#include <stdio.h>

int fun1(int res,int a ,int b)
{
  
    switch (res)
    {
    case 1:
    res=a+b;
    printf("Addition= %d",res);
        break;
    case 2:
    res=a-b;
    printf("Suntraction= %d",res);
        break;
    case 3:
    res=a*b;
    printf("Multiplication= %d",res);
        break;
    case 4:
    res=(float)a/b;
    printf("Division= %d",res);
        break;
    
    default:
    printf("Invlaid choice!");
        break;
    }
    return 0;
}
void fun2()
{
    int a,b, res;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("1.Addition");
    printf("\n2.Subtraction"); 
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter the operation of your choice: ");
    scanf("%d",&res);
     switch (res)
    {
    case 1:
    res=a+b;
    printf("Addition= %d",res);
        break;
    case 2:
    res=a-b;
    printf("Suntraction= %d",res);
        break;
    case 3:
    res=a*b;
    printf("Multiplication= %d",res);
        break;
    case 4:
    res=(float)a/b;
    printf("Division= %d",res);
        break;
    
    default:
    printf("Invlaid choice!");
        break;
    }
    
}
void fun3(int res, int a, int b)
{
 
    switch (res)
    {
    case 1:
    res=a+b;
    printf("Addition= %d",res);
        break;
    case 2:
    res=a-b;
    printf("Suntraction= %d",res);
        break;
    case 3:
    res=a*b;
    printf("Multiplication= %d",res);
        break;
    case 4:
    res=(float)a/b;
    printf("Division= %d",res);
        break;
    
    default:
    printf("Invlaid choice!");
        break;
    }
    
}
int fun4()
{
    int a,b, res;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("1.Addition");
    printf("\n2.Subtraction"); 
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter the operation of your choice: ");
    scanf("%d",&res);
     switch (res)
    {
    case 1:
    res=a+b;
    printf("Addition= %d",res);
        break;
    case 2:
    res=a-b;
    printf("Suntraction= %d",res);
        break;
    case 3:
    res=a*b;
    printf("Multiplication= %d",res);
        break;
    case 4:
    res=(float)a/b;
    printf("Division= %d",res);
        break;
    
    default:
    printf("Invlaid choice!");
        break;
    }
    return 0;
    
}


int main() {
    // int a,b, res;
    // printf("Enter two numbers: ");
    // scanf("%d %d",&a,&b);
    // printf("1.Addition");
    // printf("\n2.Subtraction"); 
    // printf("\n3.Multiplication");
    // printf("\n4.Division");
    // printf("\nEnter the operation of your choice: ");
    // scanf("%d",&res);
    fun4();

    
    return 0;
}

