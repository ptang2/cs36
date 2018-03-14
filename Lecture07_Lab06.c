#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab06
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

    for(i = 0; i < max; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        puts("");
    }




	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*
Enter a number: 10

*
**
***
****
*****
******
*******
********
*********
**********

Process returned 0 (0x0)   execution time : 1.030 s
Press any key to continue.



*/
