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

    salary = getSalary();
    while(salary >= 0)
    {
        calcRaise(salary, &rate, &raise);

        printf("Salary: %d, Rate %: %.1f, Raise: %.2f, New Salary: %.2f\n\n", salary, rate, raise, raise + salary);

        salary = getSalary();
    }

    return 0;
}

/*
Please enter the salary (-1 to exit): 10
Salary: 10, Rate : 7.0, Raise: 0.70, New Salary: 10.70

Please enter the salary (-1 to exit): 30000
Salary: 30000, Rate : 5.5, Raise: 1650.00, New Salary: 31650.00

Please enter the salary (-1 to exit): -1

Process returned 0 (0x0)   execution time : 7.593 s
Press any key to continue.



*/
