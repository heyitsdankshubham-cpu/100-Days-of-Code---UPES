//write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//90-100: Grade a
//80-89: Grade b
//70-79: Grade c
//60-69: Grade d
//below 60: Grade f
#include <stdio.h>

int main() {
    int grade;
    printf("Please enter your grades: ");
    scanf("%d",&grade);
    if(grade<100 || grade>0){
        if(grade>=90){
            printf("Grade A");
        }
        else if(grade>=80){
            printf("Grade B");
        }
        else if(grade>=70){
            printf("Grade C");
        }
        else if(grade>=60){
            printf("Grade D");
        }
        else{
            printf("Grade F");
        }
    }
    else{
        printf("Please enter correct grades");
    }
    

    return 0;

}
