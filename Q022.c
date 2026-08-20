//write a program to find profit or loss percentage given cost price and selling price
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the cost price and selling price of the item: ");
    scanf("%d %d",&a,&b);
    if(a>=b){
        if(a>b){
        printf("There is a loss of %.2f%% ", ((a-b)/(float)a)*100);
        }
        else{
            printf("No profit No loss");
        }
    }
    else{
        printf("There is a profit of %.2f%% ",((b-a)/(float)a)*100);
    }

    return 0;

}
