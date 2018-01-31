#include<stdio.h>

/*******************************************
/* Lecture 3
/*
/* This program tests the scanf
/*
/* Lab03
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
    int i,j;
    float x,y;

	//input
	scanf("%d%d%f%f", &i, &j, &x, &y); //12.3-4.0e3  works here

	scanf("%d,%d", &i, &j); //delimits 20,30
    printf("output: %d %d\n", i, j);

	scanf("%d/%d", &i, &j); //delimits 20/30
    printf("output: %d %d\n", i, j);

	scanf("%d /%d", &i, &j);
    printf("output: %d %d\n", i, j); //scanf ignores all leading whitespace


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
