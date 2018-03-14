#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab02
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
    printf("Enter a number, any text to quit: ");

    for(;scanf("%d", &num); count++)
    {
        sum += num;
        printf("Enter a number, any text to quit: ");
    }

	//CALCULATIONS
    if(count)
        avg = sum/(float)count;

	//OUTPUT
    printf("The sum is %d and avg is %.2f\n", sum, avg);

    return 0;
}

/*
Enter a number, any text to quit: a
The sum is 0 and avg is 0.00

Process returned 0 (0x0)   execution time : 2.215 s
Press any key to continue.

*/
