#include<stdio.h>

/*******************************************
/*
/* Name:       Peter Tang
/* Student ID: 959213
/* Date:       1/23/18
/*
/* Lab 01
/* Question 03
/*
/* Write a program that inputs one five digit
/* number, separates the number into its individual
/* digits and prints the digits separated from one
/* another by three spaces each. [Hint: Use combinations
/* of integer division and the remainder operation.
/* For example, if the user types in 42139, the program should
/* print 4 2 1 3 9.
/*
*******************************************/

int main()
{
	//declaration
    int defaultDigits = 10000;
    int inputNum;
    int bufferNum;

	//input
	printf("Please enter a five digit number: ");
	scanf("%5d", &inputNum);
	bufferNum = inputNum;

	//output
	while(defaultDigits > 0)
    {
        printf("%d ", bufferNum / defaultDigits);
        bufferNum %= defaultDigits;
        defaultDigits /= 10;
    }
    printf("\n");

    return 0;
}

/*
Please enter a five digit number: 42139
4 2 1 3 9

Process returned 0 (0x0)   execution time : 3.292 s
Press any key to continue.

*/
