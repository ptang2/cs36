#include<stdio.h>

/*******************************************
/* Lecture 3
/*
/* This program prompts for and outputs
/* the user's name, and three numbers.
/* Then, the program calculates and outputs
/* the sum and average of three numbers
/*
/* The point of this program is to exercise
/* flushing the input buffer
/*
/* Lab01
/*
/* Peter Tang
/* 959213
/* 1/30/18
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

	//calculations
	sum = a + b + c;
	avg = sum / (float)3;

	getchar();
	printf("Please enter another name: ");
	gets(name);

	//output
	printf("\n%s, you entered %d %d %d.\n", name, a, b, c);
	printf("\nThe sum is %d.\n", sum);
	printf("The average is %.2f.\n", avg);

    return 0;
}

/*
Please enter a name: first name
Please enter the first number:   1
Please enter the second number:  2
Please enter the third number:   3
Please enter another name: second name

second name, you entered 1 2 3.

The sum is 6.
The average is 2.00.

Process returned 0 (0x0)   execution time : 9.108 s
Press any key to continue.


*/
