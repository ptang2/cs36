#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab03
/*
/* This program shows a for loop
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

int main()
{
	//declaration
	int num, sum = 0, count = 0;
	float avg;

	//INPUT
    int k;
    for(k = 5; k <= 80; k+= 4)
    {
        count++;
    }

	//CALCULATIONS

	//OUTPUT
    printf("Count: %d\n", count);

    return 0;
}

/*
Enter a number, any text to quit: a
The sum is 0 and avg is 0.00

Process returned 0 (0x0)   execution time : 2.215 s
Press any key to continue.

*/
