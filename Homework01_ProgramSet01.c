#include<stdio.h>

/*******************************************
/* Homework 01 - Program Set 01
/*
/* This program allows the user to enter
/* the radius of a circle and outputs the
/* radius, diameter, area, and circumference
/* of the circle.  The output
/* will be displayed to 5 decimal places
/*
/* Program Set 01
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//DECLARATION

	//constant declarations
	const double PI = 22/(double)7;
	const int OUTPUT_COL = 40;

	float radius;

	//INPUT
	//using scanf to input a number
	printf("Please enter the radius of the circle: ");
	scanf("%f", &radius);

	//OUTPUT

	//outpoutting result of literal arithmetic
	printf("\nThe radius of the circle is %.5f.\n", radius);
	printf("The diameter of the circle is %.5f.\n", radius * 2);
	printf("The area of the circle is %.5f.\n", PI * radius * radius);
	printf("The circumference is %.5f.\n", 2 * PI * radius);


	return 0;
}

/*
Please enter the radius of the circle: 5

The radius of the circle is 5.00000.
The diameter of the circle is 10.00000.
The area of the circle is 78.57143.
The circumference is 31.42857.

Process returned 0 (0x0)   execution time : 0.920 s
Press any key to continue.

*/
