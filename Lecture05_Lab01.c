#include<stdio.h>
#include <stdlib.h>

/*******************************************
/* Lecture 5 - Lab01
/*
/* This program shows how random numbers
/* work
/*
/* Peter Tang
/* 959213
/* 2/20/18
*******************************************/

int main()
{
	//declaration
	int a, b, c;
	time_t t;

	srand((unsigned) time(&t));

	//INPUT
	a = rand();
	b = rand();
	c = rand();

	//CALCULATIONS & OUTPUT
	printf("%d %d %d", a, b, c);


    return 0;
}

/*
22511 2288 742
Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.

*/
