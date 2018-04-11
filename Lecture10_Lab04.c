#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 10 - Lab04
/*
/* This program exercises arrays
/*
/* Peter Tang
/* 959213
/* 4/10/18
*******************************************/

int main()
{
	int size, i, smallest, sPos, largest, lPos;

	printf("Please select array size: ");
	scanf("%d", &size);

	int arr[size];

	for(i = 0; i < size; i++)
    {
        printf("Enter the value of element %d: ", i);
        scanf("%d", &arr[i]);
    }

    smallest = INT_MAX;
    largest = INT_MIN;
    sPos = -1;
    lPos= -1;

    printf("You entered: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            sPos = i;
        }
        if(arr[i] > largest)
        {
            largest = arr[i];
            lPos = i;
        }
    }
    puts("");

    printf("The smallest number is %d at position %d or index %d\n", smallest, 1 + sPos, sPos);
    printf("The largest number is %d at position %d or index %d\n", largest, 1 + lPos, lPos);

    arr[sPos] = largest;
    arr[lPos] = smallest;

    printf("New array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");

    return 0;
}

/*
Please select array size: 4
Enter the value of element 0: 1
Enter the value of element 1: 2
Enter the value of element 2: 3
Enter the value of element 3: 4
You entered: 1 2 3 4
The smallest number is 1 at position 1 or index 0
The largest number is 4 at position 4 or index 3
New array: 4 2 3 1

Process returned 0 (0x0)   execution time : 7.238 s
Press any key to continue.

*/
