#include<stdio.h>

/*******************************************
/*
/* Name:       Peter Tang
/* Student ID: 959213
/* Date:       1/23/18
/*
/* Lab 01
/* Question 02
/*
/* The program asks the user to
/* enter two numbers, obtains the two numbers
/* from the user and prints the sum, product,
/* difference, quotient and remainder of the
/* two numbers.
/*
/* Output:
/* Enter two numbers: 20 5
/* The sum is 25
/* The product is 100
/* The difference is 15
/* The quotient is 4
/* The remainder is 0
*******************************************/

int main()
{
	//declaration
    int firstNum;
    int secondNum;

	//input
	printf("Enter two numbers: ");
	scanf("%d %d", &firstNum, &secondNum);

	//output
	printf("The sum is %d\n", firstNum + secondNum);
	printf("The product is %d\n", firstNum * secondNum);
	printf("The difference is %d\n", firstNum - secondNum);
	printf("The quotient is %d\n", firstNum/secondNum);
	printf("The remainder is %d\n", firstNum % secondNum);

    return 0;
}

/*
Enter two numbers: 20 5
The sum is 25
The product is 100
The difference is 15
The quotient is 4
The remainder is 0

Process returned 0 (0x0)   execution time : 2.824 s
Press any key to continue.

*/
