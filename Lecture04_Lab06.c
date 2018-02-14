#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab06
/*
/* This program checks if a number is
/* positive, negative or equal to 0
/*
/* Lab06
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
    printf("\nYour number %d is %s.\n", num, num == 0? "zero": num > 0? "positive": "negative");

    return 0;
}

/*
Enter a number: -332

Your number -332 is negative.

Process returned 0 (0x0)   execution time : 2.616 s
Press any key to continue.


*/
