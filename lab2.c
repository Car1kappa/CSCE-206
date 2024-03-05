#include <stdio.h>
#include <stdlib.h>
int simulateNavigation(){
    int random_numbers = rand()%4 + 1;
    int random_numbers2 = rand()%4 + 1;
    char* answer;
    char* answer2;
    if(random_numbers == 1){
        answer = "North";
    }    
    else if(random_numbers == 2){
        answer = "East";
    }
    else if(random_numbers == 3){
        answer = "South";
    }
    else if(random_numbers == 4){
        answer = "West";
    }
    if(random_numbers2 == 1){
        answer2 = "North";
    }    
    else if(random_numbers2 == 2){
        answer2 = "East";
    }
    else if(random_numbers2 == 3){
        answer2 = "South";
    }
    else if(random_numbers2 == 4){
        answer2 = "West";
    }
    if(answer != answer2){
        // if they are different
        printf("Driving %s, then turn %s onto the next street.\n",answer,answer2);
    }
    else{
        // if they are the same
        printf("Continue straight, heading %s.\n", answer);
    }
    return 0;
}
int main(void){
    simulateNavigation();
    return 0;
}