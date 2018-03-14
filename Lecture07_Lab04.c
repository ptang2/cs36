#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab04
/*
/* This program shows a for loop
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

int main()
{
	//declaration
	int i = 0, j = 0, max;

	//INPUT
    printf("Enter a number: ");
    scanf("%d", &max);
    puts("");

    printf("%7d", 1);
    for(i = 2; i <= max; i++)
        printf("%4d", i);
    puts("");

    for(i = 1; i <= max; i++)
    {
        printf("%2d)", i);
        for(j = i; j <= i*i; j++)
        {
            if(j % i == 0)
                printf("%4d", j);

        }
        puts("");
    }




	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*
Enter a number: 12

      1   2   3   4   5   6   7   8   9  10  11  12
 1)   1
 2)   2   4
 3)   3   6   9
 4)   4   8  12  16
 5)   5  10  15  20  25
 6)   6  12  18  24  30  36
 7)   7  14  21  28  35  42  49
 8)   8  16  24  32  40  48  56  64
 9)   9  18  27  36  45  54  63  72  81
10)  10  20  30  40  50  60  70  80  90 100
11)  11  22  33  44  55  66  77  88  99 110 121
12)  12  24  36  48  60  72  84  96 108 120 132 144

Process returned 0 (0x0)   execution time : 1.061 s
Press any key to continue.

*/
