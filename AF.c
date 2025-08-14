#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a,i;
    printf("Enter a number to print the even numbers inside the numbers :");
    scanf("%d",&a);

    for(i=2;i<=a;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}