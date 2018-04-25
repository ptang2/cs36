#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 12 - Lab03
/*
/* This program exercises strings
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

int main()
{
    int i , count;
    char str[100];

    printf("Enter string * to end: ");
    gets(str);

    printf("%s\n", str);

    i = 0;
    count = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ') count++;
        i++;
    }

    printf("Number of words is: %d\n", count + 1);

    return 0;
}

/*
Enter string * to end: Hello there fred*
Hello there fred*
Number of words is: 3

Process returned 0 (0x0)   execution time : 10.334 s
Press any key to continue.


*/
