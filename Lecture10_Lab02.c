#include<stdio.h>

/*******************************************
/* Lecture 10 - Lab02
/*
/* This program exercises arrays
/*
/* Peter Tang
/* 959213
/* 4/10/18
*******************************************/

int main()
{
	srand(time(NULL));
	int rNum = rand() % 5 + 1;

	int arr[rNum], i;

	for(i = 0; i < rNum; i++)
    {
        printf("Please enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < rNum; i++)
    {
        printf("%d.) %d\n", i,
               arr[i]);
    }

    return 0;
}

/*
Please enter number 1: 1
Please enter number 2: 2
Please enter number 3: 3
Please enter number 4: 4
0.) 1
1.) 2
2.) 3
3.) 4

Process returned 0 (0x0)   execution time : 2.746 s
Press any key to continue.



*/
