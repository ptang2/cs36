#include<stdio.h>
#include<limits.h>

/*******************************************
/* Lecture 12 - Lab05
/*
/* This program exercises strings
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

int main()
{
    int i = 0, io = 0, j = 0, count = 0;
    char str[100];
    char key[100];

    printf("Enter string : ");
    gets(str);
    printf("Enter a pattern to be found: ");
    gets(key);

    printf("string: %s\npattern: %s\n", str, key);

    while(str[i] != '\0')
    {
        if(str[i] == key[j])
        {
            io = i;
            while(str[io] == key[j] && key[j] != '\0')
            {
                io++; j++;
            }
            if(key[j] == '\0')
            {
                count++;
                i = io - 1;
            }
            j = 0;
        }
        i++;
    }

    printf("Pattern found %d times\n", count);

    return 0;
}

/*
Enter string : sea shroe seaseasea shore
Enter a pattern to be found: sea
string: sea shroe seaseasea shore
pattern: sea
Pattern found 4 times

Process returned 0 (0x0)   execution time : 5.616 s
Press any key to continue.

*/
