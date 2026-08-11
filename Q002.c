//write a program to input two numbers and display their sum,difference,product and quotient 
#include <stdio.h>

int main() {
    int a,b;
    char x;
    printf("Please enter both the numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum= %d \n",a+b);
    printf("   Diff= %d \n",a-b);
    printf("   Product= %d \n ",a*b);
    
     if(b!=0){
        printf("   Quotient= %d",a/b);
     }

      else{
        printf("Cannot divide by zero");
      }

    return 0;

}
