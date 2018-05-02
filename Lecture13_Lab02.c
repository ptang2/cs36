#include<stdio.h>
#include<limits.h>
#include<math.h>

/*******************************************
/* Lecture 13 - Lab02
/*
/* This program exercises struct
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    Point p1;
    Point p2;

    printf("Enter coord of first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter coord of second point: ");
    scanf("%d %d", &p2.x, &p2.y);

    float dist;

    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

    printf("\nThe coord of the first point is: %dx %dy\n", p1.x, p1.y);
    printf("The coord of the second point is: %dx %dy\n", p2.x, p2.y);
    printf("The distance between the points is: %.2f\n", dist);


    return 0;
}

/*
Enter coord of first point: 1 2
Enter coord of second point: 2 3

The coord of the first point is: 1x 2y
The coord of the second point is: 2x 3y
The distance between the points is: 1.41

Process returned 0 (0x0)   execution time : 1.880 s
Press any key to continue.


*/
