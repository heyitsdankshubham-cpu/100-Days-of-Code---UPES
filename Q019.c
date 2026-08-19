//write a program to classify a triangle as Equilateral,Isosceles or Scalene based on it side lengths
#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the length of sides: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b){
        if(a==c){
        printf("Equilateral triangle");
        }
        else{
            printf("Isosceles triangle");
        }
    }
    else{
        if(b!=c){
            printf("Scalene triangle");
        }
        else{
            printf("Isosceles triangle");
        }
    }



    return 0;

}
