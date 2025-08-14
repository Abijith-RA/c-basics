#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int a[100];
    int i,limit;

    printf("Enter How much limit want to enter Between(1-100):");
    scanf("%d",&limit);

    for (i=0;i<limit;i++)
    {
        printf("Enter the value:");
        scanf("%d",&a[i]);
        /*printf("Entred values are :%d\n",a[i]);*/
    }

    for (i=0;i<limit;i++)
    {
        printf("Entred values are :%d\n",a[i]);
    }
    return 0;
}