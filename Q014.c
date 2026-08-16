//write a program to input a character to check whether it is a vowel or consonants using if-else
#include <stdio.h>

int main() {
    char check;
    printf("Enter the character you want to check: ");
    scanf("%c",&check);

    if(check=='a' || check=='e' || check=='i' || check=='o' || check=='u'){
        printf("Vowel");
            }

            else{
                printf("Consonant");
            }

    return 0;

}
