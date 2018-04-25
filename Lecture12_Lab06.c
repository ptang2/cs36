#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 12 - Lab06
/*
/* This program exercises strings
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

int main()
{
    int i;
    char str[100];

    printf("Enter string: ");
    gets(str);

    printf("%s\n", str);

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ',') str[i] = ';';
        i++;
    }

    printf("%s\n", str);

    return 0;
}

/*
Enter string: test, test , , , test,
test, test , , , test,
test; test ; ; ; test;

Process returned 0 (0x0)   execution time : 3.762 s
Press any key to continue.

*/
