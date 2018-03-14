#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab05
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
	int i = 0, j = 0, max;

	//INPUT
    printf("Enter a number: ");
    scanf("%d", &max);
    puts("");

    for(i = 1; i <= max; i++)
    {
        printf("Pass %d:", i);
        for(j = 1; j <= max; j++)
        {
            printf("%2d", j);
        }
        puts("");
    }




	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*
Enter a number: 5

Pass 1: 1 2 3 4 5
Pass 2: 1 2 3 4 5
Pass 3: 1 2 3 4 5
Pass 4: 1 2 3 4 5
Pass 5: 1 2 3 4 5

Process returned 0 (0x0)   execution time : 1.248 s
Press any key to continue.


*/
