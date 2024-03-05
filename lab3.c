#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int input1;
    int input2;
    printf("Enter the first number:\n");
    scanf("%d",&input1);
    printf("Enter the first number:\n");
    scanf("%d",&input2);

    if(input1 > input2){
        printf("%d is greater than %d\n",input1,input2);
    }
    else if(input2 > input1){
        printf("%d is less than %d\n", input1, input2);
    }
    else{
        printf("%d is equal to %d\n", input1,input2);
    }
    return 0;
}