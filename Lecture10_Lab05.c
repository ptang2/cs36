#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 10 - Lab05
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
	int size, i;

	printf("Please select array size: ");
	scanf("%d", &size);

	int arr[size];

	for(i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    printf("The original array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");


    printf("The array in reverse: ");
    for(i = size - 1; i > -1; i--)
    {
        printf("%d ", arr[i]);
    }
    puts("");

    return 0;
}

/*
Please select array size: 5
The original array: 92 96 81 8 66
The array in reverse: 66 8 81 96 92

Process returned 0 (0x0)   execution time : 1.700 s
Press any key to continue.


*/
