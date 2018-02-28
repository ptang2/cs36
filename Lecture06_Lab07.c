#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 6 - Lab07
/*
/* This program shows a do loop
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

int main()
{
	//declaration
	int sumPos, sumNeg, countPos, countNeg, num;
	float avgPos, avgNeg;

	sumPos = 0;
	sumNeg = 0;
	countPos = 0;
	countNeg = 0;

	//INPUT
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num >= 0)
        {
            sumPos += num;
            countPos++;
        }
        else if(num != -1 && num < 0)
        {
            sumNeg += num;
            countNeg++;
        }
    }while(num != -1);

	//CALCULATIONS
    if(countPos > 0)
        avgPos = sumPos/(float)countPos;
    if(countNeg > 0)
        avgNeg = sumNeg/(float)countNeg;

	//OUTPUT
    printf("Positive numbers: %d, mean: %.2f\n", sumPos, avgPos);
    printf("Negative numbers: %d, mean: %.2f", sumNeg, avgNeg);

    return 0;
}

/*
Enter a number: 2
Enter a number: 2
Enter a number: -2
Enter a number: -2
Enter a number: -1
Positive numbers: 4, mean: 2.00
Negative numbers: -4, mean: -2.00
Process returned 0 (0x0)   execution time : 4.352 s
Press any key to continue.

*/
