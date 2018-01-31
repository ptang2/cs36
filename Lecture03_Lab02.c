#include<stdio.h>

/*******************************************
/* Lecture 3
/*
/* This program tests the output of string
/* formatting
/*
/* Lab02
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
    char str[] = "Good Morning";

	//output
	printf("\n %s", str);
	printf("\n %20s", str);
	printf("\n %20.10s", str); //only printint first 10 chars
	printf("\n %.7s", str);
	printf("\n %-20.10s", str);
	printf("\n %7s", str);

    return 0;
}

/*

 Good Morning
         Good Morning
           Good Morni
 Good Mo
 Good Morni
 Good Morning
Process returned 0 (0x0)   execution time : 0.071 s
Press any key to continue.

*/
