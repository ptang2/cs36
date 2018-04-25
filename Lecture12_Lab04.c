#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 12 - Lab04
/*
/* This program exercises strings
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

int main()
{
    int i = 0, words = 0, lines = 0;
    char str[100];

    printf("Enter string * to end: ");
    scanf("%[^*]", str);

    printf("%s\n", str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ') words++;
        if(str[i] == '\n')
        { lines++; words++;}
        i++;
    }

    printf("Word count: %d\nLine count: %d\nCharacter count: %d\n", ++words, ++lines, i);

    return 0;
}

/*
Enter string * to end: Hello there
my friend*
Hello there
my friend
Word count: 4
Line count: 2
Character count: 21

Process returned 0 (0x0)   execution time : 6.990 s
Press any key to continue.


*/
