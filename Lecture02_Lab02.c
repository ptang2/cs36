#include<stdio.h>

/*******************************************
/* Lecture 2
/*
/* This program prints an integer and float
/* using different formas using printf
/*
/* Lab02
/*
/* Peter Tang
/* 959213
/* 1/23/18
*******************************************/

int main()
{
	//declaration
    int i;
	float x;

	//data
	i = 40;
	x = 839.21;

	//calculation

	//output
	printf("|%d|%*d|%-5d|%5.3d|\n", i, 5, i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}

/*
|40|   40|40   |  040|
|   839.210|8.392e+002|839.21    |

Process returned 0 (0x0)   execution time : 0.031 s
Press any key to continue.

*/
