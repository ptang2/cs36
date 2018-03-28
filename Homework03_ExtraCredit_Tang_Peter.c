#include<stdio.h>

/*******************************************
/* Homework 03 - Extra Credit
/*
/* This program will allow a user to pick
/* where to send a knight on a chess board
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

//GLOBAL VARS
const int NUM_ROWS = 8;
const int NUM_COLS = 8;
const int MAX_CHOICES = 8;

//Struct position of possible moves
struct position
{
    char aRow;
    int nCol;
};

/*******************************************
* void printBoard
*
* Prints the contents of the board with margins
*******************************************/
void printBoard(char board[NUM_ROWS][NUM_COLS]);

/*******************************************
* void initBoard
*
* Fills board with spaces for init
*******************************************/
void initBoard(char board[NUM_ROWS][NUM_COLS]);

/*******************************************
* int printMenu
*
* Prints input menu for user
* Returns index of choices
*******************************************/
int printMenu(struct position choices[MAX_CHOICES], int numChoices);


int main()
{
	//Declarations
    char board[NUM_ROWS][NUM_COLS];

    struct position choices[MAX_CHOICES];
    choices[0].aRow = 'A';
    choices[0].nCol = 1;
    choices[1].aRow = 'A';
    choices[1].nCol = 1;
    choices[2].aRow = 'A';
    choices[2].nCol = 1;
    choices[3].aRow = 'A';
    choices[3].nCol = 1;
    choices[4].aRow = 'A';
    choices[4].nCol = 1;
    choices[5].aRow = 'A';
    choices[5].nCol = 1;
        choices[6].aRow = 'A';
    choices[6].nCol = 1;
    choices[7].aRow = 'A';
    choices[7].nCol = 1;
    choices[8].aRow = 'A';
    choices[8].nCol = 1;
	//INITIALIZATION
	initBoard(board);

	printBoard(board);

	printMenu(choices, 8);


	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*******************************************
* void printBoard
*
* Prints the contents of the board with margins
*******************************************/
void printBoard(char board[NUM_ROWS][NUM_COLS])
{
    int row, col, hor;
    char rHead = 'A';
    int cHead = 1;

    printf("\n    ");
    for(row = 0; row < NUM_ROWS; row++, rHead++)
    {
        printf("%c ", rHead);
    }
    printf("\n\n");

    for(row = 0; row < NUM_ROWS; row++, cHead++)
    {
        printf(" %d |", cHead);
        for(col = 0; col < NUM_COLS; col++)
        {
            printf("%c|", board[row][col]);
        }
        puts("");

        printf("    ");
        for(hor = 0; hor < NUM_ROWS; hor++)
        {
            printf("- ");
        }
        puts("");
    }

    puts("");
}

/*******************************************
* void initBoard
*
* Fills board with spaces for init
*******************************************/
void initBoard(char board[NUM_ROWS][NUM_COLS])
{
    int row, col;

    for(row = 0; row < NUM_ROWS; row++)
    {
        for(col = 0; col < NUM_COLS; col++)
        {
            board[row][col] = ' ';
        }
    }

    board[3][3] = 'k';
}

/*******************************************
* int printMenu
*
* Prints input menu for user
* Returns index of choices
*******************************************/
int printMenu(struct position choices[MAX_CHOICES], int numChoices)
{
    int i, indexChoice;
    char inputPos[3];

    printf(" Where would you like to move (-1 to quit)?\n\n" );
    for(i = 0; i < numChoices; i++)
    {
        printf(" %d.) %c%d  ", i+1, choices[i].aRow, choices[i].nCol);
    }
    printf("\n\n ");

    scanf("%d", &indexChoice);

    return indexChoice;
}

/*
//TODO evidence

*/
