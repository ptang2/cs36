#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab09
/*
/* This program shows how to use a switch
/* statement
/*
/* Lab09
/*
/* Peter Tang
/* 959213
/* 2/13/18
*******************************************/

int main()
{
	//declaration
	char c;

	//INPUT
	printf("Enter a character: ");
	c = getchar();
	int isVowel;
	isVowel = 0;

	//CALCULATIONS & OUTPUT
	switch(c)
	{
	    case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U': case 'y': case 'Y': isVowel = 1;
	}

	printf("\nYour character %c %s a vowel.\n", c, isVowel? "is": "is not");


    return 0;
}

/*
Enter a character: a

Your character a is a vowel.

Process returned 0 (0x0)   execution time : 1.310 s
Press any key to continue.

*/
