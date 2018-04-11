#include<stdio.h>

/*******************************************
/* Lecture 10 - Lab01
/*
/* This program exercises functions
/*
/* Peter Tang
/* 959213
/* 4/10/18
*******************************************/

void guessNum(int guess, int answer)
{
    int buffer;

    if(guess == answer)
    {
        printf("You guess correctly: %d\n", guess);
    }
    else
    {
        if(guess > 0 && guess < 101)
        {
            if(guess < answer)
                printf("Your guess is too low\n");
            else
                printf("Your guess is too high\n");
        }
        printf("Please guess a number from 1 to 100: ");
        scanf("%d", &buffer);
        guessNum(buffer, answer);
    }
}

int main()
{
	srand(time(NULL));
	int answer = rand() % 100 + 1;

	guessNum(-1, answer);

    return 0;
}

/*
Please guess a number from 1 to 100: 2
Your guess is too low
Please guess a number from 1 to 100: 99
Your guess is too high
Please guess a number from 1 to 100: 80
Your guess is too high
Please guess a number from 1 to 100: 70
Your guess is too high
Please guess a number from 1 to 100: 20
Your guess is too high
Please guess a number from 1 to 100: 10
Your guess is too low
Please guess a number from 1 to 100: 11
Your guess is too low
Please guess a number from 1 to 100: 12
Your guess is too low
Please guess a number from 1 to 100: 13
Your guess is too low
Please guess a number from 1 to 100: 14
Your guess is too low
Please guess a number from 1 to 100: 15
Your guess is too low
Please guess a number from 1 to 100: 16
Your guess is too low
Please guess a number from 1 to 100: 17
Your guess is too low
Please guess a number from 1 to 100: 18
Your guess is too low
Please guess a number from 1 to 100: 19
You guess correctly: 19

Process returned 0 (0x0)   execution time : 28.298 s
Press any key to continue.


*/
