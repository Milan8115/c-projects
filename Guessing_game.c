#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int guess, random;
    int NO_gues = 0, cant;

    srand(time(NULL));
    random = rand() % 100 + 1;   

    printf("Welcome to the guessing game :-");

    do {
        printf("\nplz enter the right number (1 to 100):- ");
        scanf("%d", &guess);  

        NO_gues++;

        if (NO_gues <= 4) {

            if (guess < random) {
                printf("\nyour entered number is smaller than the guessing number");
            }
            else if (guess > random) {
                printf("\nyour entered number is larger than the guessing number");
            }
            else {
                printf("\nCongratulations you guessed the right number %d after %d attempts", guess, NO_gues);
                break;  
            }

        } 
        else {
            printf("\nOOP's do you want to see the result ??\n (YES:- 1) (NO:- 2): ");
            scanf("%d", &cant);

            if (cant == 1) {
                printf("\nOOp's the number is %d", random);
                break;
            } 
            else {
                printf("\nOk try again");
                NO_gues = 0;
               
            }
        }
    } while (guess != random);
    printf("\nDeveloped by: MILAN");
    return 0;
}