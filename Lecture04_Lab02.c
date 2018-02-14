#include<stdio.h>

/*******************************************
/* Lecture 4 - Lab02
/*
/* This program uses relational and boolean
/* operators
/*
/* Lab01
/*
/* Peter Tang
/* 959213
/* 2/13/18
*******************************************/

int main()
{
	//declaration
	int score;

	//INPUT
	printf("Enter a score: ");
	scanf("%d", &score);


	//CALCULATIONS & OUTPUT
    if(score < 1 || score > 100)
        printf("Invalid\n");
    else
    {
        if(score >= 80)
            printf("Good\n");
        else
        {
            if(score >= 55)
                printf("OK\n");
            else
                printf("Moron\n");
        }
    }



    return 0;
}

/*
Enter a score: 0
Invalid

Process returned 0 (0x0)   execution time : 1.312 s
Press any key to continue.

*/
