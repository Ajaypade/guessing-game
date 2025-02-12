//guessing game
#include<stdio.h>
#include<stdlib.h>
void main() 
{
    int number, guess, attempts=0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (between 1 and 100):\n");

    while (1) 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number) 
        {
            printf("Too low! Try again.\n\n");
        } 
        else if (guess > number) 
        {
            printf("Too high! Try again.\n\n");
        } 
        else 
        {
            printf("You guessed it in %d attempts! Well done.\n", attempts);
            break;
        }
    }
}
