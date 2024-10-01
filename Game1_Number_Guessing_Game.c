/* We will write a program that generates a random number and asks player to guess the number correct*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

    int random_number;
    int player_number ;
    int count = 0 ;

    /*Seeding : Seed the random number generator,
    initializes the random number generator with a seed based on the current time, 
    ensuring different random numbers each time the program is run.*/
    srand(time(NULL));

    // Generate a random number between 1 and 100
    random_number = rand()%100 + 1 ;

    do 
    {
        printf("Enter the Number\n");
        scanf("%d",&player_number);
        if(player_number < random_number)
        {
            printf("Hint! Enter Greater Number!!\n");
        }
        else if(player_number > random_number)
        {
            printf("Hint! Enter Lesser Number!!\n");
        }
        else{
            printf("\nWohoooo!You Guessed the right number this time");
        }
        count++;
    }while( player_number != random_number);
    printf("\nYou Number Of Guesses %d",count);

}