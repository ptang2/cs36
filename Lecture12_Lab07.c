#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 12 - Lab07
/*
/* This program exercises strings
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

int main()
{
    int i = 0, size = 0, found = 1;
    char str[100];

    printf("Enter string * to end: ");
    scanf("%[^*]", str);

    while(str[size] != '\0') size++;

    int j = size - 1;

    while(i <= j && found)
        if(str[i++] != str[j--]) found = 0;


    printf("%s is%s a palindrome\n", str, found? "": " not");

    return 0;
}

/*
Enter string * to end: reder*
reder is a palindrome

Process returned 0 (0x0)   execution time : 5.285 s
Press any key to continue.

*/
