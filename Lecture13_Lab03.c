#include<stdio.h>
#include<limits.h>
#include<math.h>

/*******************************************
/* Lecture 13 - Lab03
/*
/* This program exercises function
/*
/* Peter Tang
/* 959213
/* 4/24/18
*******************************************/

int getSalary()
{
    int salary;
    printf("Please enter the salary (-1 to exit): ");
    scanf("%d", &salary);

    return salary;
}

void calcRaise(int salary, float* rate, float* raise)
{
    if(salary > 0 && salary< 30000) *rate = 7;
    else if (salary >= 30000 && salary < 40000) *rate = 5.5;
    else *rate = 4;

    *raise = salary * (*rate / 100);
}

int main()
{
    int salary;
    float rate;
    float raise;

    salary = 0;

    while(salary >= 0)
    {
        salary = getSalary();
        calcRaise(salary, &rate, &raise);

        printf("Salary: %d, Rate %: %.1f, Raise: %.2f, New Salary: %.2f\n\n", salary, rate, raise, raise + salary);

        salary = getSalary();
    }

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
