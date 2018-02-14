#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab01
/*
/* This program uses relational and boolean
/* operators
/*
/* Lab01
/*
/* Peter Tang
/* 959213
/* 2/13/18
*******************************************/

int main()
{
	//declaration
	int score;

	//INPUT
	printf("Enter a score: ");
	scanf("%d", &score);


	//CALCULATIONS & OUTPUT
	if(score >= 80 && score <= 100)
        printf("Good\n");

    if(score >= 55 && score <= 79)
        printf("OK\n");

    if(score >= 1 && score <= 54)
        printf("Moron\n");

    if(score < 1 || score > 100)
        printf("Invalid\n");

    return 0;
}

/*
Enter a score: 10
Moron

Process returned 0 (0x0)   execution time : 3.931 s
Press any key to continue.

*/
