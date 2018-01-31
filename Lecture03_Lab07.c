#include<stdio.h>

/*******************************************
/* Lecture 3
/*
/* This program will calculate the volume
/* and weight of shipping company
/*
/* Lab07
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//declaration
	int height;
	int length;
	int width;
	int volume;

	printf("Enter the height of box: ");
	scanf("%d", &height);

	printf("Enter the length of box: ");
	scanf("%d", &length);

	printf("Enter the width of box: ");
	scanf("%d", &width);

	volume = height * length * width;

	printf("\nVolume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165)/166);


    return 0;
}

/*
Enter the height of box: 5
Enter the length of box: 12
Enter the width of box: 10

Volume (cubic inches): 600
Dimensional weight (pounds): 4

Process returned 0 (0x0)   execution time : 4.360 s
Press any key to continue.

*/
