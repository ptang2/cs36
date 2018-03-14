#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab01
/*
/* This program shows a for loop
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

int main()
{
	//declaration
	int sum, num, count;
	float avg;

	sum = 0;
	count = 0;

	//INPUT
    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num!= -999; count++)
    {
        sum += num;
        printf("Enter a number, -999 to quit");
        scanf("%d", &num);
    }

	//CALCULATIONS
    if(count)
        avg = sum/(float)count;

	//OUTPUT
    printf("The sum is %d and avg is %.2f\n", sum, avg);

    return 0;
}

/*
Enter a number: 1
Enter a number, -999 to quit2
Enter a number, -999 to quit-999
The sum is 3 and avg is 1.50

Process returned 0 (0x0)   execution time : 7.145 s
Press any key to continue.


*/
