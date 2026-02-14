#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number=0;
    int guess=0;
    int no_of_guesses;
    time_t t;
     // Initialization of the random number generator
     srand ((unsigned) time(&t));

     // get the random number
     random_number =rand() % 21;
     printf("Welcome to the Guessing Game!\n");
     printf("I have selected a random number between 0 and 20. Can you guess it?\n");

     for (no_of_guesses = 5; no_of_guesses >0; no_of_guesses--) {
        printf("You have %d guesses left.\n", no_of_guesses);
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if(guess < 0 || guess > 20) {
            printf("Invalid input! Please enter a number between 0 and 20.\n");
        }
        else if (guess == random_number) {
            printf("Congratulations! You guessed the number correctly!\n");
            break;
        }
        else if(guess <random_number) {
            printf("Sorry wrong guess! The number is higher than %d.\n", guess);
        }
        else if(guess > random_number) {
            printf("Sorry wrong guess! The number is lower than %d.\n", guess);
        }
     }
     if (no_of_guesses == 0) {
        printf("Game over! You have used all your guesses. The number was %d.\n", random_number);
     }
        return 0;


}