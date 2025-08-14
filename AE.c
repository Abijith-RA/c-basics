#include <stdio.h>
#include <stdlib.h>
int main(void){

    int a,i,sum=0;

    printf("Enter the limit in number :");
    scanf("%d",&a);

    if(a<=0){
        printf("Enter a valid number");
    }else{

    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("Result is %d",sum);
}
    return 0;
}