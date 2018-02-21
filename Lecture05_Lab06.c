#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 5 - Lab06
/*
/* This program reads numbers and outputs
/* the count of pos, neg, zero numbers
/*
/* Peter Tang
/* 959213
/* 2/20/18
*******************************************/

int main()
{
	//declaration
	int num, pos = 0, neg = 0, zero = 0;

	//INPUT
	puts("Enter a number, -1 to quit");
	scanf("%d", &num);

	//CALCULATIONS
	while (num != -1)
    {
        if(num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        puts("Enter a number, -1 to quit");
        scanf("%d", &num);
    }

	//OUTPUT
	printf("You entered %d positive, %d negative, and %d zero numbers", pos, neg, zero);


    return 0;
}

/*
Enter a number, -1 to quit
1
Enter a number, -1 to quit
-2
Enter a number, -1 to quit
-2
Enter a number, -1 to quit
0
Enter a number, -1 to quit
0
Enter a number, -1 to quit
0
Enter a number, -1 to quit
-1
You entered 1 positive, 2 negative, and 3 zero numbers
Process returned 0 (0x0)   execution time : 7.129 s
Press any key to continue.

*/
