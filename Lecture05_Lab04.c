#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 5 - Lab04
/*
/* This program displays largest number
/*
/* Peter Tang
/* 959213
/* 2/20/18
*******************************************/

int main()
{
	//declaration
	int max = INT_MIN;
	int num;

	//INPUT
	puts("Enter a value, -999 to quit");
	scanf("%d", &num);

	//CALCULATIONS
	while (num != -999)
    {
        max = num > max? num: max;

        puts("Enter a value, -999 to quit");
        scanf("%d", &num);
    }

	//OUTPUT
	printf("The largest number is %d", max);


    return 0;
}

/*
Enter a value, -999 to quit
10
Enter a value, -999 to quit
20
Enter a value, -999 to quit
30
Enter a value, -999 to quit
-999
The largest number is 30
Process returned 0 (0x0)   execution time : 6.802 s
Press any key to continue.


*/
