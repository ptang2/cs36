#include<stdio.h>

/*******************************************
/* Lecture 6 - Lab05
/*
/* This program checks if a year is a leap
/* year inside a do loop
/*
/* Lab07
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

int main()
{
	//declaration
	int year = 1900;

	//INPUT
	do
    {
        printf("Year %d %s a leap year.\n", year, year % 4 == 0? (year % 400 == 0? "is":(year % 100 == 0? "is not" : "is")) :"is not");
        year += 4;
    }while(year < 2101);

	//CALCULATIONS & OUTPUT


    return 0;
}

/*
Year 1900 is not a leap year.
Year 1904 is a leap year.
Year 1908 is a leap year.
Year 1912 is a leap year.
Year 1916 is a leap year.
Year 1920 is a leap year.
Year 1924 is a leap year.
Year 1928 is a leap year.
Year 1932 is a leap year.
Year 1936 is a leap year.
Year 1940 is a leap year.
Year 1944 is a leap year.
Year 1948 is a leap year.
Year 1952 is a leap year.
Year 1956 is a leap year.
Year 1960 is a leap year.
Year 1964 is a leap year.
Year 1968 is a leap year.
Year 1972 is a leap year.
Year 1976 is a leap year.
Year 1980 is a leap year.
Year 1984 is a leap year.
Year 1988 is a leap year.
Year 1992 is a leap year.
Year 1996 is a leap year.
Year 2000 is a leap year.
Year 2004 is a leap year.
Year 2008 is a leap year.
Year 2012 is a leap year.
Year 2016 is a leap year.
Year 2020 is a leap year.
Year 2024 is a leap year.
Year 2028 is a leap year.
Year 2032 is a leap year.
Year 2036 is a leap year.
Year 2040 is a leap year.
Year 2044 is a leap year.
Year 2048 is a leap year.
Year 2052 is a leap year.
Year 2056 is a leap year.
Year 2060 is a leap year.
Year 2064 is a leap year.
Year 2068 is a leap year.
Year 2072 is a leap year.
Year 2076 is a leap year.
Year 2080 is a leap year.
Year 2084 is a leap year.
Year 2088 is a leap year.
Year 2092 is a leap year.
Year 2096 is a leap year.
Year 2100 is not a leap year.

Process returned 0 (0x0)   execution time : 0.044 s
Press any key to continue.

*/
