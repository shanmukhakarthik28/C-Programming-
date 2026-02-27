#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Use current time as seed for random generator
    srand(time(0));

    // Generate random number in the range 1–100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_no;
    // printf("Random Number: %d\n", number);
    do
    {
        printf("Guess A Number\n");
        scanf("%d", &guessed_no);
        no_of_guesses++;
        if (guessed_no > random_number)
        {
            printf("Pick a lower Number\n");
        }
        else if (guessed_no < random_number)
        {
            printf("Pick a Higher Number\n");
        }
    } while (guessed_no != random_number);
    printf("You Have Successfully Guessed the number %d \n", random_number);
    printf("No' of Guesses : %d", no_of_guesses);
    return 0;
}