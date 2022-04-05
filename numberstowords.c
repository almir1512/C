// ALMIR NOORI S027 CSE

// Q. To write the input number in word form (1-99)

#include <stdio.h>>
#include <string.h> // include string header file 

int main() {
    
    char a[20];
    char *single[]={"zero","one","two","three","four","five","six","seven","eight","nine"};  // single digit for in words 
    char *double_d[]={"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen ","seventeen","eighteen","nineteen"};  // eleven = 11 (1+1=2) therefore empty index
    char *tensPlace[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    
    printf("Enter a number (0-99)\n");
    scanf("%s",a); // take input in string 

    int len=strlen(a); //  length of the string
    int num;

    if (len==1){
        num= a[0]-48;// convert character(string) into integer 
        // i.e'1' to 1
        printf("%s",single [num]);
    }
    if (len==2 && a[0]==49){  // if tens place is one 
        num = (a[0]-48) + (a[1]-48); //1+1=2 eleven
        printf("%s ",double_d[num]);
    }
    else if(len==2 && a[0]==48){  // if units place zero 
        num = (a[0]-48) + (a[1]-48); //1+1=2 for eleven
        printf("%s ",tensPlace[num]);
    }
    else if (len==2){
        num = a[0] - 48 ;
        printf("%s ",tensPlace[num]);
        num = a[1] - 48;
        printf("%s ",single[num]);
    }
}

// real time example 
// train announcement system  
// train no: 12125 platform no 2 at 16:35