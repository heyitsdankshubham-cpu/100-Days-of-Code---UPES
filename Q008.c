//Write a program to fing and display the sum of first n natural numbers
#include <stdio.h>

int main() {
    int a;
    printf("Find the sum of first n natural numbers\n");
    printf("For how much natural numbers you want to find the sum\n");
    printf("Enter the value: ");
    scanf("%d",&a);

    printf("Sum= %d"a*(a+1)/2);

    return 0;

}
