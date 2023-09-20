/*Project 1 - Rock Paper Scissors*/

#include <stdio.h> /*For all inbuilt functions*/
#include <stdlib.h> /*For random number*/
#include <time.h> /*For random number*/
#include <ctype.h> /*For loop repetition*/


/*Computer random input*/
int getRandomNumber(int ai)
{
    srand(time(NULL));
    return rand()%ai;
}

/*Inputs comparison*/
int greater(int c, int p)
{
    if(c==p)
        return -1;
    else if (c==1 && p==2)
        return 0;
    else if (c==2 && p==3)
        return 1;
    else if (c==3 && p==1)
        return 1;
    else if (c==1 && p==3)
        return 0;
    else if (c==2 && p==1)
        return 1;
    else if (c==3 && p==2)
        return 0;
     
}

int main() {

    int playercode=0, comp;
    char more;

    /*String array using pointer*/
    char *options[3] = {"Rock", "Paper", "Scissors"};

    do /*Loop Start*/
    {   
        /*Game menu options*/
        printf("\nPress '1' for 'Rock' | Press '2' for 'Paper' | Press '3' for 'Scissors'\n\n");

        /*User input*/
        printf("\tPlayer's turn: ");
        scanf("%d", &playercode);
    
        while (1) /*Update - User input pass restriction*/
        {
            if (playercode >= 1 && playercode <= 3)
                break;
            else
            {
                printf("\nPlease enter input between 1 to 3 only: ");
                scanf("%d", &playercode);
            }
            while (getchar() != '\n'); /*Don't allow pass char*/
        }
        
        /*Number to string convertion*/
        printf("Player choose - %s\n", options[playercode-1]);

        /*Computer choise*/
        comp = getRandomNumber(3)+1;
        printf("\tComputer's turn\n");
        /*Number to string convertion*/
        printf("Computer choose - %s\n\n", options[comp-1]);

        /*Calling comparison function*/
        int result = greater(playercode, comp);

        /*Final outcome*/
        if (result == -1)
            printf("DRAW!");
        else if (result == 0)
            printf("YOU WIN!");
        else
            printf("COMPUTER WIN!");
        
        /*Input by user and random choise of computer*/
        printf("\n\nYou choose %d  Computer choose %d\n\n", playercode, comp);

        /*Loop repeat*/
        printf("Play again? (Y/N): ");
        scanf(" %c", &more);

    } while (toupper(more)=='Y'); /*Loop end*/
    
    return 0;
    
} /*Project end*/