#include<stdio.h>
#include <stdlib.h>

/*******************************************
/* Lecture 5 - Lab02
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
	a = rand() % 6 + 1;
	b = rand() % 6 + 2;
	c = a + b;

	//CALCULATIONS & OUTPUT
	printf("%d %d %d", a, b, c);


    return 0;
}

/*
3 2 5
Process returned 0 (0x0)   execution time : 0.047 s
Press any key to continue.

*/
