#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 6 - Lab04
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
	int num, i;

	//INPUT
	do
    {
        printf("Enter a number or -999 to quit: ");
        scanf("%d", &num);

        if(num != -999)
        {
            for(i = 1; i <= num; i++)
            {
                printf("%d\t%d\t%d\n", i, i * i, i * i * i);
            }
            puts("");
        }

    }while(num != -999);

	//CALCULATIONS


	//OUTPUT


    return 0;
}

/*
Enter a number or -999 to quit: 3
1       1       1
2       4       8
3       9       27

Enter a number or -999 to quit:
*/
