#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int i;

    for(i=1;i<=10;i++){
        printf("HI\n");
        
        if (i==5)
        {
            break;
        }
        printf("Hello\n");
    }
    printf("Finished");

    return 0;
}