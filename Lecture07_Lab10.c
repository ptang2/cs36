#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

/*******************************************
/* Lecture 7 - Lab10
/*
/* This program shows a for loop
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

float PI = 3.14;

float areaCircle(float radius)
{
    return PI*radius*radius;
}

float perimeterCircle(float radius)
{
    return 2*PI*radius;
}

float volumeSphere(float radius)
{
    return (4/(float)3)*PI*radius*radius*radius;
}



int main()
{
	//declaration
    float radius;

	//INPUT
    printf("Enter a radius: ");
    scanf("%f", &radius);
    puts("");

    printf("The radius of the circle is %f\n", radius);
    printf("The area is %f\n", areaCircle(radius));
    printf("The perimeter is %f\n", perimeterCircle(radius));
    printf("The volume of sphere is %f\n", volumeSphere(radius));


	//CALCULATIONS

	//OUTPUT

    return 0;
}

/*
Enter a radius: 2

The radius of the circle is 2.000000
The area is 12.560000
The perimeter is 12.560000
The volume of sphere is 33.493335

Process returned 0 (0x0)   execution time : 0.749 s
Press any key to continue.

*/
