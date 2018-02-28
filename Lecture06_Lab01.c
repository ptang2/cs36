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
	int num, sum, count;
	float avg;

	sum = 0;
	avg = 0;
	count = 0;

	//INPUT
	do
    {
        printf("Enter a number or -999 to quit: ");
        scanf("%d", &num);

        if(num != -999)
        {
            sum += num;
            count++;
        }

    }while(num != -999);

	//CALCULATIONS
    if(count)
        avg = sum/(float)count;

	//OUTPUT
	printf("The sum is %d.\nThe average is %.2f\n\n", sum, avg);


    return 0;
}

/*
Enter a number or -999 to quit: 1
Enter a number or -999 to quit: 1
Enter a number or -999 to quit: -999
The sum is 2.
The average is 1.00


Process returned 0 (0x0)   execution time : 3.635 s
Press any key to continue.


*/
