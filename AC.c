#include <stdio.h>
#include <stdlib.h>

int main(void){
    int Mark;
    char sub[50];
    printf("--------To check the passed or fail in a subject--------");

    printf("\nThe name of Student :");
    scanf("%49s",&sub);

    printf("\nEnter the mark of subject between (1-100):");
    scanf("%d",&Mark);

    if(Mark>100||Mark<0){
        printf("\nEnter a valid real mark");
    }else if(Mark>50){
        printf("\n%s passed In the subject with mark %d",sub,Mark);
    }else{
        printf("\n%s Failed in the exam",sub);
    }
    return 0;
}