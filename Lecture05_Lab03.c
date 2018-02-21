#include<stdio.h>
#include <stdlib.h>

/*******************************************
/* Lecture 5 - Lab03
/*
/* This program shows how loops work
/*
/* Peter Tang
/* 959213
/* 2/20/18
*******************************************/

int main()
{
	//declaration
	int num, sum, count;
	sum = count = 0;

	//INPUT
	puts("Enter a value, -999 to quit");
	scanf("%d", &num);

	//CALCULATIONS
	while (num != -999)
    {
        sum += num;

        puts("Enter a value, -999 to quit");
        scanf("%d", &num);
        ++count;
    }

	//OUTPUT
	printf("Sum is %d\nAverage is %.2f", sum, count == 0? 0: sum / (float)count);


    return 0;
}

/*
Enter a value, -999 to quit
10
Enter a value, -999 to quit
23
Enter a value, -999 to quit
1
Enter a value, -999 to quit
-999
Sum is 34
Average is 11.33
Process returned 0 (0x0)   execution time : 10.343 s
Press any key to continue.

*/
