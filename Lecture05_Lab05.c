#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 5 - Lab05
/*
/* This program calculates the sum of numbers
/* from m to n
/*
/* Peter Tang
/* 959213
/* 2/20/18
*******************************************/

int main()
{
	//declaration
	int start, end, sum, i = 0;

	//INPUT
	puts("Enter a starting value");
	scanf("%d", &start);

    puts("Enter an ending value");
	scanf("%d", &end);

	//CALCULATIONS
	sum = start;
	for(i = start + 1; i <= end; i++)
        sum += i;

	//OUTPUT
	printf("The sum of the numbers is %d", sum);


    return 0;
}

/*
Enter a starting value
1
Enter an ending value
5
The sum of the numbers is 15
Process returned 0 (0x0)   execution time : 5.944 s
Press any key to continue.

*/
