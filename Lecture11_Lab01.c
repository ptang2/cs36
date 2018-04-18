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

void read_array(int array[], int size)
{
    int i, arr[size];

	for(i = 0; i < size; i++)
    {
        printf("Enter the value of element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void display_array(int array[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
}

int find_biggest(int array[], int size)
{
    int i, largest, lPos;
    largest = INT_MIN;
    lPos= -1;

    for(i = 0; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
            lPos = i;
        }
    }
    printf("The largest number is %d at position %d or index %d\n", largest, 1 + lPos, lPos);
    return lPos;
}

int find_smallest(int array[], int size)
{
    int i, smallest, sPos;
    smallest = INT_MAX;
    sPos = -1;
    for(i = 0; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            sPos = i;
        }
    }
    printf("The smallest number is %d at position %d or index %d\n", smallest, 1 + sPos, sPos);
    return sPos;
}

void interchange(int array[], int size)
{
    int temp;
    int sPos = array[find_smallest(array, size)];
    int lPos = array[find_biggest(array, size)];

    temp = arr[sPos];
    arr[sPos] = arr[lPos];
    arr[lPos] = temp;
}

int main()
{
	int size, i, smallest, sPos, largest, lPos;

	printf("Please select array size: ");
	scanf("%d", &size);

	int arr[size];

    read_array(arr, size);
    display_array(arr, size);

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
