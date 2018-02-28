#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 6 - Lab01
/*
/* This program shows a do loop
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

int main()
{
	//declaration
	int num, max;

	max = INT_MIN;

	//INPUT
    printf("Enter a number or -999 to quit: ");
    scanf("%d", &num);

	while(num != -999)
    {
        if (num > max)
            max = num;

        printf("Enter a number or -999 to quit: ");
        scanf("%d", &num);
    }

	//CALCULATIONS

	//OUTPUT
	printf("The max number is %d", max);


    return 0;
}

/*
Enter a number or -999 to quit: 1
Enter a number or -999 to quit: 2
Enter a number or -999 to quit: 3
Enter a number or -999 to quit: 4
Enter a number or -999 to quit: -999
The max number is 4
Process returned 0 (0x0)   execution time : 4.571 s
Press any key to continue.

*/
