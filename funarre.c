#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void){
    int result;

    result=sum();
    printf("%d",result);
    return 0;
}
int sum(){
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}