#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 6 - Lab06
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
	int num;
	char input[50];

	//INPUT

    printf("Enter a string: ");
    gets(input);

    int i = 0;
    int upper = 0;
    int lower = 0;
    int digit = 0;
    while(input[i] != '*')
    {
        if(isupper(input[i]))
            upper++;
        else if (islower(input[i]))
            lower++;
        else if (isdigit(input[i]))
            digit++;
        i++;
    }

    printf("Uppercase: %d, Lowercase: %d, Digits: %d", upper, lower, digit);


	//CALCULATIONS


	//OUTPUT


    return 0;
}

/*
Enter a string: 12aaBB*
Uppercase: 2, Lowercase: 2, Digits: 2
Process returned 0 (0x0)   execution time : 9.225 s
Press any key to continue.

*/
