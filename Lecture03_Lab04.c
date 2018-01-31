#include<stdio.h>

/*******************************************
/* Lecture 3
/*
/* Working with operators
/*
/* Lab04
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
    int a;

	a = 5;
	a++;
	printf("%d\n", a) //6

	++a;
	printf("%d\n", a) //7

	a--;
	printf("%d\n", a) //6

	--a;
	printf("%d\n", a) //5

	a = 5;
	printf("%d\n", ++a); //6
	printf("%d\n", a++); //6
	printf("%d\n", a);   //7
	printf("%d\n", a--); //7
	printf("%d\n";, --a);//5

	int x=10,y;
	y=x++;

	y=++x;

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
