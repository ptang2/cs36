#include<stdio.h>

#define NUM 10
#define TAXRATE 8.75


/*******************************************
/* Lecture 3
/*
/* Working with preprocessor directives
/*
/* Lab05
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
	int a,b;
	float c,d;


	d = TAXRATE/100;
	a = NUM + 3;
	c = c * TAXRATE/100;

    return 0;
}

/*
  1
-20
    .3
   -4.0e3 f

Process returned 0 (0x0)   execution time : 26.862 s
Press any key to continue.

*/
