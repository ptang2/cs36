#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 11 - Lab01
/*
/* This program exercises arrays
/*
/* Peter Tang
/* 959213
/* 4/17/18
*******************************************/

int binarySearch(int key, int array[], int size)
{
    int top, bot, mid;
    top = size - 1;
    bot = 0;

    while(top >= bot)
    {
        mid = (top + bot)/2;

        if(array[mid] == key)
        {
            return mid;
        }
        else if (key < array[mid])
        {
            top = mid - 1;
        }
        else if (key > array[mid])
        {
            bot = mid + 1;
        }
    }

    return -1;
}

void printArray(int* array, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    puts("");
}

void quickSort(int array[], int beg, int end)
{
    if(beg >= end) return;

    int pivot, l, r, temp;
    pivot = array[end];
    l = beg;
    r = end - 1;

    while(l < r)
    {
        printf("Before l: %d r: %d\n", l, r);
        while(l < end && array[l] < pivot) l++;
        while(r > -1 && array[r] > pivot) r--;

        printf("After l: %d r: %d\n", l, r);
        if(l < r)
        {
            printf("Swapping %d: %d and %d: %d\n", l, array[l], r, array[r]);
            temp = array[l];
            array[l] = array[r];
            array[r] = temp;
            printf("Swap check: "); printArray(array, end + 1);
        }
    }
    temp = array[r + 1];
    array[r+ 1] = pivot;
    array[end] = temp;
    quickSort(array, beg, l - 1);
    quickSort(array, r + 1, end);
}

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
    printArray(arr, size);

    printf("The sorted array: \n");
    quickSort(arr, 0, size - 1);
    printArray(arr, size);

    return 0;
}

/*
Please select array size: 5
The original array: 92 96 81 8 66
The array in reverse: 66 8 81 96 92

Process returned 0 (0x0)   execution time : 1.700 s
Press any key to continue.


*/
