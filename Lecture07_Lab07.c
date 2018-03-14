#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab07
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
	int i = 0, j = 0, count = 0, max;

	//INPUT
    printf("Enter a number: ");
    scanf("%d", &max);
    puts("");

    for(i = 0; count <= max; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", count++);
        }
        puts("");
    }




	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*
Enter a number: 9

0
1 2
3 4 5
6 7 8 9

Process returned 0 (0x0)   execution time : 0.718 s
Press any key to continue.

*/
