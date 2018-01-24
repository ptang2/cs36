#include<stdio.h>

/*******************************************
/* Lecture 2
/*
/* This program prompts for and outputs
/* the user's name, and three numbers.
/* Then, the program calculates and outputs
/* the sum and average of three numbers
/*
/* Lab03
/*
/* Peter Tang
/* 959213
/* 1/23/18
*******************************************/

int main()
{
	//declaration
    int a,b,c,sum;
    float avg;
	char name[50];

	//input
	printf("Please enter a name: ");
	scanf(" %[^\n]s\n", name);

	printf("%-33s", "Please enter the first number: ");
	scanf("%d", &a);
	printf("%-33s", "Please enter the second number: ");
	scanf("%d", &b);
    printf("%-33s", "Please enter the third number: ");
	scanf("%d", &c);

	sum = a + b + c;
	avg = sum / (float)3;

	printf("\n%s, you entered %d %d %d.\n", name, a, b, c);
	printf("\nThe sum is %d.\n", sum);
	printf("The average is %.2f.\n", avg);




	//calculation

	//output

    return 0;
}

/*
Please enter a name: Peter Tang
Please enter the first number:   10
Please enter the second number:  20
Please enter the third number:   30

Peter Tang, you entered 10 20 30.

The sum is 60.
The average is 20.00.

Process returned 0 (0x0)   execution time : 9.111 s
Press any key to continue.

*/
