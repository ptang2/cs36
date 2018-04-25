#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 12 - Lab02
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
    scanf("%[^*]", str);

    printf("%s\n", str);

    i = 0;
    while(str[i] != '\0') i++;

    printf("Number of characters is: %d\n", i);

    return 0;
}

/*
Enter string * to end: Hello world*
Hello world
Number of characters is: 11

Process returned 0 (0x0)   execution time : 10.100 s
Press any key to continue.

*/
