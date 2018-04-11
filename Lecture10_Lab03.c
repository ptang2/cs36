#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 10 - Lab03
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
	int size, i, smallest, pos;

	printf("Please select array size: ");
	scanf("%d", &size);

	int arr[size];

	for(i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    smallest = INT_MAX;
    pos = -1;
    for(i = 0; i < size; i++)
    {
        printf("%d.) %d\n", i, arr[i]);
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            pos = i;
        }

    }


    printf("The smallest number is %d at position %d or index %d", smallest, 1 + pos, pos);

    return 0;
}

/*
Please select array size: 5
0.) 4
1.) 24
2.) 6
3.) 44
4.) 49
The smallest number is 4 at position 1 or index 0
Process returned 0 (0x0)   execution time : 2.278 s
Press any key to continue.


*/
