//write a program to calculate the area and circumfrence of a circle given its radius
#include <stdio.h>

int main() {
   int r;
    float pi=3.14159;
    printf("Enter the value of radius: ");
    scanf("%d",&r);
    printf("Area=%.2f, Circumfrence=%.2f",pi*r*r,2*pi*r);
    return 0;

}
