#include <stdio.h>
#include <Stdlib.h>

int main(void){
    char choice;
    printf("Select A for computer\nSelect B for Mobile\nSelect 1 for Tab\nEnter a valid input :");
    scanf("%c",&choice);
    switch (choice)
    {
        case 'A':
        printf("Selected computer");
        break;
        case 'B':
        printf("Selected Moblie");
        break;
        case '1':
        printf("Selected Tab");
        break;
        default:
        printf("Enter valid input mone");
    }
    return 0;
}    