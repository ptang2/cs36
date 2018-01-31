#include<stdio.h>

#define NUM 10
#define TAXRATE 8.75
#define SUM (a+b+c)
#define AVG SUM/(float)3

/*******************************************
/* Lecture 3
/*
/* Working with preprocessor directives
/*
/* Lab06
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
	int a,b,c;

	printf("Enter 3 numbers: ");
	scanf("%d%d%d", &a,&b,&c);
	printf("%d %d %d\n", a, b, c);
	printf("Sum is %d\n", SUM);
	printf("Average is %f\n", AVG);

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
