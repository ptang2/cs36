#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab08
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
	int i = 0, j = 0, k = 0, l = 0, count = 0, max;

	//INPUT
    printf("Enter a number: ");
    scanf("%d", &max);
    puts("");

    for(i = 1; i <= max; i++)
    {
        for(j = 1; j <= max - i; j++)
            printf("  ");
        for(k = 1; k <= i; k++)
            printf("%d ", k);
        for(l = i - 1; l > 0; l--)
            printf("%d ", l);
        puts("");
    }




	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*
Enter a number: 5

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

Process returned 0 (0x0)   execution time : 0.796 s
Press any key to continue.

*/
