#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int target = rand() % 100 + 1; 
    int guess;
    int attempts = 0;
     
    printf("=== Number GUESSING GAME (1-100) ===\n");
     
    printf("Guess the number: ");

    scanf("%d", &guess);
    
    attempts++;

    if (guess < 1 || guess > 100) {
        printf("Invalid input. Please enter a number between 1 and 100.\n");
    
    }
    if (guess < target) {
        printf("Too low! Try again.\n");
    } else if (guess > target) {
        printf("Too high! Try again.\n");
    } else {
        printf("Congratulations! You guessed the number %d in %d attempts.\n", target, attempts);
    
    } while (guess != target);

    return 0;
}