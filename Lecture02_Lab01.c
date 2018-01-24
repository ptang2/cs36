#include<stdio.h>

/*******************************************
/* Lecture 2
/*
/* This program print the sum
/* and average of three numbers
/*
/* Lab01
/*
/* Peter Tang
/* 959213
/* 1/16/18
*******************************************/

int main()
{
	//declaration
    int a, b, c;
	int sum;
	float avg;

	//data
    a = 10;
    b = 20;
	c = 30;

	//calculation
    sum = a + b + c;
	avg = sum / 3;

	//output
	printf("The 3 numbers are %d %d %d\n", a, b, c);
    printf("The sum is %d\n", sum);
	printf("The average is %0.2f\n", avg);

    return 0;
}

/*
The 3 numbers are 10 20 30
The sum is 60
The average is 20.00

Process returned 0 (0x0)   execution time : 0.039 s
Press any key to continue.
*/
