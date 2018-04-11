#include<stdio.h>

/*******************************************
/* Lecture 9 - Lab01
/*
/* This program exercises pass by reference
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

const float PI = 3.14;

void circles(float* area, float* circumference, float* diameter)
{
    int radius;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    *area = PI * radius * radius;
    *circumference = 2*PI*radius;
    *diameter = 2 * radius;
}

void triangles(float* area, int* sumSides)
{
    int s1,s2,s3;
    printf("Enter 3 sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    *area = .5*s1*s2;
    *sumSides = s1+s2+s3;
}

void simpleMath(int* sum, float* avg, int* product)
{
    int n1, n2, n3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    *sum = n1 + n2 + n3;
    *avg = (*sum)/(float)3;
    *product = n1 * n2 * n3;
}

int main()
{
	float carea;
	float circum;
	float diameter;
	float tarea;
	int sumSides;
	int sum;
	float avg;
	int product;

	circles(&carea, &circum, &diameter);
	triangles(&tarea, &sumSides);
	simpleMath(&sumSides, &avg, &product);

	int i = 0;
	for(;i<10;)
    {
        printf("%d\n",i++);
    }

	printf("circle: area %.2f circum %.2f diameter %.2f\n", carea, circum, diameter);
	printf("triangles: area %.2f sumsides %d\n", tarea, sumSides);
	printf("simpleMath: sum %d avg %.2f product %d", sum, avg, product);



    return 0;
}

/*
Enter circle radius: 2
Enter 3 sides: 1 2 3
Enter 3 numbers: 1 2 3
circle: area 12.56 circum 12.56 diameter 4.00
triangles: area 1.00 sumsides 6
simpleMath: sum 2 avg 2.00 product 6
Process returned 0 (0x0)   execution time : 9.161 s
Press any key to continue.

*/
