#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab09
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
	int i = 0, j = 0, k = 0, l = 0, count = 0, m, n;

	//INPUT
    printf("Enter a number m: ");
    scanf("%d", &m);
    printf("Enter a number n: ");
    scanf("%d", &n);
    puts("");

    for(i = m; i <= n; i++)
    {
        printf("%2d %s\n", i, i % 2 == 0? "even": "odd");
    }




	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*
Enter a number m: 3
Enter a number n: 15

 3 odd
 4 even
 5 odd
 6 even
 7 odd
 8 even
 9 odd
10 even
11 odd
12 even
13 odd
14 even
15 odd

Process returned 0 (0x0)   execution time : 2.636 s
Press any key to continue.

*/
