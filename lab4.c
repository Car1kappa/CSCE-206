#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int countdown;
    printf("Enter the starting number for the countdown: ");
    scanf("%d",&countdown);
    printf("Countdown: \n");
    for(int i = countdown; i >= 0; --i){
        printf("%d\n",i);
    }
    printf("Launch!");
}