#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab05
/*
/* This program converts any character
/* from lower to upper case
/*
/* Lab05
/*
/* Peter Tang
/* 959213
/* 2/13/18
*******************************************/

int main()
{
	//declaration
	char thisChar;

	//INPUT
	printf("Enter a letter: ");
	thisChar = getchar();


	//CALCULATIONS & OUTPUT
    printf("\nYour letter %c has been capitalized to %c.\n", thisChar, thisChar - 32);

    return 0;
}

/*
Enter a letter: e

Your letter e has been capitalized to E.

Process returned 0 (0x0)   execution time : 0.678 s
Press any key to continue.

*/
