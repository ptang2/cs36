#include<stdio.h>

/*******************************************
/* Lecture 8 - Lab02
/*
/* This program exercises strings
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

void load(char* f, char* l)
{
    printf("Enter first name: ");
    gets(f);
    printf("enter last name: ");
    gets(l);
}

int main()
{
	char f[20], l[20];

	load(f, l);
	printf("%s %s", f, l);

    return 0;
}

/*
Enter first name: bob
enter last name: marley
bob marley
Process returned 0 (0x0)   execution time : 4.297 s
Press any key to continue.


*/
