#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab08
/*
/* This program shows how to use a switch
/* statement
/*
/* Lab08
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
	scanf("%c", &c);

	//CALCULATIONS & OUTPUT
	switch(c)
	{
	    case 'g': case 'G': printf("Good\n");
            break;

	    case 'f': case 'F': printf("Fair\n");
            break;

	    case 'b': case 'B': printf("Bad\n");
            break;

        default: printf("Invalid\n");
	}


    return 0;
}

/*
Enter a character: g
Good

Process returned 0 (0x0)   execution time : 2.200 s
Press any key to continue.

*/
