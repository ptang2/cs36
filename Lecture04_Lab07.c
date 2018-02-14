#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab07
/*
/* This program checks if a year is a leap
/* year.
/*
/* Lab07
/*
/* Peter Tang
/* 959213
/* 2/13/18
*******************************************/

int main()
{
	//declaration
	int year;

	//INPUT
	printf("Enter a year: ");
	scanf("%d", &year);

	//CALCULATIONS & OUTPUT
    printf("\nYour year %d %s a leap year.\n", year, year % 4 == 0? (year % 400 == 0? "is":(year % 100 == 0? "is not" : "is")) :"is not");

    //if some form of logic is confusing, take the most specific case and work down from that.

    return 0;
}

/*
Enter a year: 2018

Your year 2018 is not a leap year.

Process returned 0 (0x0)   execution time : 1.589 s
Press any key to continue.

*/
