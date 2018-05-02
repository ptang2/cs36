#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 13 - Lab01
/*
/* This program exercises in-place quicksort
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

void printArray(int* array, int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d ", array[i]);
}

void swap(int* array, int i1, int i2)
{
    int temp;
    temp = array[i1];
    array[i1] = array[i2];
    array[i2] = temp;
}

void quickSort(int* array, int beg, int end)
{
    if(beg >= end) return;

    int l = beg;
    int r = end - 1;
    int p = end;
    int m = (end - beg) / 2;

    if(array[p] > array[beg])
    {
        if(array[beg] > array[m]) p = beg;
        else p = m;
    }

    swap(array, p, end);

    int pivot = array[end];

    while(l < r)
    {
        while(array[l] <= pivot && l < end) l++;
        while(array[r] >= pivot && r > 0) r--;

        if(l<r)swap(array, l, r);
    }
    swap(array, l, end);
    quickSort(array, beg, l - 1);
    quickSort(array, l + 1, end);
}
int main()
{
    int size, i;
    time_t t;

    srand((unsigned) time(&t));

    printf("Enter size of array: ");
    scanf("%d", &size);

    int array[size];

    for(i = 0; i < size; i++)
        array[i] = rand() % 100 + 1;

    printf("\nunsorted: ");
    printArray(array, size);
    quickSort(array, 0, size - 1);
    printf("\nsorted: ");
    printArray(array, size);
    puts("");

    return 0;
}

/*
Enter size of array: 20

unsorted: 23 5 72 81 43 64 86 2 48 59 23 52 37 52 47 65 40 67 28 73
sorted: 2 5 23 23 28 37 40 43 47 48 52 52 59 64 65 67 72 73 81 86

Process returned 0 (0x0)   execution time : 1.801 s
Press any key to continue.

*/
