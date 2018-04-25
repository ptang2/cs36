#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 12 - Lab01
/*
/* This program exercises arrays
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/



void printArray(int* array, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    puts("");
}

int binarySearch(int key, int array[], int size)
{
    int top = size - 1;
    int bot = 0;
    int mid;

    while(bot <= top)
    {
        mid = (top - bot) / 2;

        if(key == array[mid])
            return array[mid];
        else if (key < array[mid])
            top = mid - 1;
        else
            bot = mid + 1;
    }
    return -1;
}

void swap(int array[], int i, int j)
{
    int temp;

    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void quickSort(int array[], int beg, int end)
{
    if(beg >= end)
    return;

    int temp, pivot, pivoti;

    pivot = array[end];
    pivoti = end;

    int mid = array[(end - beg)/2];

    if(pivot > array[beg])
        if(array[mid] > array[beg]) {pivot = array[beg]; pivoti = beg;}
        else {pivot = array[mid]; pivoti = mid;}


    temp = array[end];
    array[end] = pivot;
    array[pivoti] = temp;

    int l = beg;
    int r = end - 1;

    while (l <= r)
    {
        while(array[l] <= pivot) l++;
        while(array[r] >= pivot) r--;

        if(l < r) swap(array, l, r);
    }
        printf("l: %d r: %d beg: %d end: %d\n", l, r, beg, end);
        printArray(array, end + 1);

        swap(array, l, end);
        quickSort(array, beg, l - 1);
        quickSort(array, l + 1, end);
}



int main()
{
    int size, i;

    srand(time(NULL));

    printf("Please enter an array size: ");
    scanf("%d", &size);

    int array[size];

    for(i = 0; i < size; i++)
    {
        array[i] = rand() % 100 + 1;
    }

    printArray(array, size);
    quickSort(array, 0, size - 1);
    printArray(array, size);

    return 0;
}

/*
Please select array size: 5
The original array: 92 96 81 8 66
The array in reverse: 66 8 81 96 92

Process returned 0 (0x0)   execution time : 1.700 s
Press any key to continue.


*/
