#include<stdio.h>

/*******************************************
/* Lecture 3
/*
/* This program asks user to enter US dollar
/* amounts and breaks down the bills
/*
/* Lab09
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
	int dollarAmount;

	//INPUT
	printf("Enter a dollar amount: ");
	scanf("%d", &dollarAmount);


	//CALCULATIONS & OUTPUT
	printf("\n$20 bills: %d\n", dollarAmount / 20);
	dollarAmount %= 20;

	printf("$10 bills: %d\n", dollarAmount / 10);
	dollarAmount %= 10;

	printf("$ 5 bills: %d\n", dollarAmount / 5);
	dollarAmount %= 5;

	printf("$ 1 bills: %d\n", dollarAmount / 1);


    return 0;
}

/*
Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
$ 5 bills: 0
$ 1 bills: 3

Process returned 0 (0x0)   execution time : 1.873 s
Press any key to continue.

*/
