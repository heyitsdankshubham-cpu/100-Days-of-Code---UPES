//write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include <stdio.h>

int main() {
    int a,b;
    printf("What are the length and breadth of the rectangle: ");
    scanf("%d %d",&a,&b);

    printf("The area of the rectangle is : %d\n",a*b);
    printf("The perimeter of the rectangle is : %d",2*(a+b));

    return 0;

}
