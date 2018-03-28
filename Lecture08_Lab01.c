#include<stdio.h>

/*******************************************
/* Lecture 8 - Lab01
/*
/* This program exercises function references
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

void swap( int a, int b)
{
    int t = a; a = b; b = t;
}

int main()
{
	int x = 30, y = 10;
	printf("%d %d\n", x, y);
	swap(x, y);
	printf("%d %d\n", x, y);

    return 0;
}

/*
30 10
30 10

Process returned 0 (0x0)   execution time : 0.030 s
Press any key to continue.

*/
