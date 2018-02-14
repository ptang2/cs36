#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab04
/*
/* This program checks if character
/* entered is a vowel or not
/*
/* Lab04
/*
/* Peter Tang
/* 959213
/* 2/13/18
*******************************************/

int main()
{
	//declaration
    const char VOWELS[12] = {'a','e','i','o','u','y','A','E','I','O','U','Y'};
	char thisChar;
	int found;
	int index;

	//INPUT
	printf("Enter a letter: ");
	thisChar = getchar();

	//CALCULATIONS & OUTPUT
	index = 0;
	found = 0;
	while (!found && index < 12)
    {
        if(thisChar == VOWELS[index])
            found = 1;
        index++;
    }

   printf("\nYour entered character %c %s a vowel\n", thisChar, found == 1?"is":"is not");




    return 0;
}

/*
Enter a letter: Y

Your entered character Y is a vowel

Process returned 0 (0x0)   execution time : 0.989 s
Press any key to continue.

*/
