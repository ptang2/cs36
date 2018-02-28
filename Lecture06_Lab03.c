#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 6 - Lab03
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
	int num, sum, count;
	float avg;

	//INPUT
	do
    {
        printf("Enter a number or -999 to quit: ");
        scanf("%d", &count);

        sum = 0;
        avg = 0;

        if(count != -999)
        {
            int i;
            for(i = 0; i < count; i++)
                sum += i+1;

            avg = sum / (float)count;

            //OUTPUT
            printf("The average of the first %d numbers is %.2f\n\n", count, avg);
        }

    }while(count != -999);

	//CALCULATIONS


	//OUTPUT


    return 0;
}

/*
Enter a number or -999 to quit: 5
The average of the first 5 numbers is 3.00

Enter a number or -999 to quit: 2
The average of the first 2 numbers is 1.50

Enter a number or -999 to quit: 1
The average of the first 1 numbers is 1.00

Enter a number or -999 to quit:
*/
