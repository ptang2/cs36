#include<stdio.h>

/*******************************************
/* Lecture 3
/*
/* Add 2 fractions
/*
/* Lab08
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
	int first_numer;
	int first_denom;
	int sec_numer;
	int sec_denom;
	int final_numer;
	int final_denom;

	//INPUT
	printf("Enter the first fraction: ");
	scanf("%d/%d", &first_numer, &first_denom);

	printf("Enter the second fraction: ");
	scanf("%d/%d", &sec_numer, &sec_denom);

	//CALCULATIONS
	final_denom = first_denom * sec_denom;
	final_numer = (first_numer * sec_denom) + (sec_numer * first_denom);

	//OUTPUT
	printf("\nThe sum of the fraction is %d/%d\n", final_numer, final_denom);


    return 0;
}

/*
Enter the first fraction: 1/2
Enter the second fraction: 3/4

The sum of the fraction is 10/8

Process returned 0 (0x0)   execution time : 3.952 s
Press any key to continue.

*/
