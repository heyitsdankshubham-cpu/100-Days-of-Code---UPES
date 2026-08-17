//write a program to input a character and check whether it is an uppercase alphabet,lowercase alphabet,digit or special character
#include <stdio.h>

int main() {
    char x;
    printf("Enter the character you want to check: ");
    scanf("%c",&x);
     
    if(x>='a'&&x<='z'){
        printf("It is a lower case alphabhet");
    }
    
    else if(x>='A'&&x<='Z'){
        printf("It is a upper case alphabet");

    }

    else if(x>='0'&&x<='9'){
        printf("It is a digit");
            }

    else{
        printf("Special character");
    }
    return 0;

}
