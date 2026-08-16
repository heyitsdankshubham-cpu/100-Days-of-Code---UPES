//write a program to input an integer and check whether it is positive,negative or zero using nested if-else
#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
     
     if("a>=0"){
         if(a==0){
            printf("Zero");
         }

            else{
                printf("Positive");
            }
     }
      

      else{
        printf("Negative");
      }
    return 0;

}
