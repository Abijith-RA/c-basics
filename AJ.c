#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number,i,j;

    printf("Enter the number to bulid star Pyramid :");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
        for(j=number;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}