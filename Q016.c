//write a program to input three numbers and find the largest among them using if-else
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
         if(a>c){
            printf("The greatest number among these three is %d",a);

         }
         else{
            printf("The greatest number among these three is %d",c);

         }


    }
    else{
       if(b<c){
        printf("The greatest number among these three is %d",c);

       }
       else{
        printf("The greatest number among these three is %d",b);
       }

       }
    


    return 0;

}
