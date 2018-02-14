#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab03
/*
/* This program gets user input and
/* determines if the number is even of odd.
/*
/* Lab03
/*
/* Peter Tang
/* 959213
/* 2/13/18
*******************************************/

int main()
{
	//declaration
	int num;

	//INPUT
	printf("Enter a number: ");
	scanf("%d", &num);


	//CALCULATIONS & OUTPUT
    printf("\nThe number you entered %d is %s.\n", num, num % 2 == 0? "even": "odd");

    return 0;
}

/*
Enter a number: 23895

The number you entered 23895 is odd.

Process returned 0 (0x0)   execution time : 1.457 s
Press any key to continue.

*/
