#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*******************************************
/* Homework 05
/*
/* This program allows the user to enter
/* the data for each employee and it will
/* calculate the rate, raise, and new salary
/*
/* The program will also save the array of
/* structures to a text file and binary file.
/* The program will then retrieve data from
/* the text file and binary file and print
/* the data
/*
/*
/* Peter Tang
/* 959213
/* 5/15/18
*******************************************/

//Employee struct object
struct Employee
{
    char name[30];
    double salary;
    float rate;
    double raise;
    double newSalary;
};

//Name of file
const char* TEXTFILE_NAME = "Homework05_EmployeeData.txt";
const char* BINARYFILE_NAME = "Homework05_EmployeeData.bin";

//Max array size
const int MAX_SIZE = 20;


/***************************************
* void getEmployeeData()
*
* Gets employee data from user
*
* in  - struct Employee pointer
* in  - array size ptr
*
* Returns: array of employee data and size
*
***************************************/
void getEmployeeData(struct Employee*, int*);

/***************************************
* void printEmployeeData()
*
* Prints employee data to console
*
* in  - struct Employee pointer
* in  - array size
*
* Returns: nothing
*
***************************************/
void printEmployeeData(struct Employee*, int);

/***************************************
* float getRate()
*
* Calculates rate from salary
*
* in  - salary
*
* Returns: rate of salary
*
***************************************/
float getRate(double);

/***************************************
* double getRaise(double, float);
*
* Calculates raise from salary and rate
*
* in  - salary, rate
*
* Returns: raise
*
***************************************/
double getRaise(double, float);

/***************************************
* void saveText(struct Employee*, int);
*
* Saves Employee data as text
*
* in  - array ptr, size
*
* Returns: raise
*
***************************************/
void saveText(struct Employee*, int);

/***************************************
* void getText(struct Employee*, int);
*
* Get Employee data from text
*
* in  - array ptr, size
*
* Returns: raise
*
***************************************/
void getText(struct Employee*, int);

/***************************************
* void saveBinary(struct Employee*, int);
*
* Get Employee data from text
*
* in  - array ptr, size
*
* Returns: nothing
*
***************************************/
void saveBinary(struct Employee*, int);

/***************************************
* void getBinary(struct Employee*, int);
*
* Get Employee data from text
*
* in  - array ptr, size
*
* Returns: nothing
*
***************************************/
void getBinary(struct Employee*, int);

/***************************************
* void swapEmployeeData()
*
* Swap employee data within array
*
* in  - struct Employee pointer
* in  - index 1, index 2
*
* Returns: swap struct data
*
***************************************/
void swapEmployeeData(struct Employee* ePtr, int i1, int i2);

/***************************************
* void quickSortEmployeeData()
*
* Sort employee data using quicksor
*
* in  - struct Employee pointer
* in  - beg index, ending index
*
* Returns: sorted array of em data
*
***************************************/
void quickSortEmployeeData(struct Employee* ePtr, int beg, int end);

int main()
{
    struct Employee empArray[MAX_SIZE];
    struct Employee empArrayFromTextFile[MAX_SIZE];
    struct Employee empArrayFromBinFile[MAX_SIZE];
    int size, i;

    //INPUT - get employee data from user
    getEmployeeData(empArray, &size);

    //CALC - sort list
    quickSortEmployeeData(empArray, 0, size - 1);

    //OUTPUT - print employee data
    printEmployeeData(empArray, size);

    //OUTPUT - save data to text file
    printf("\n *** Now saving data to text file: %s\n", TEXTFILE_NAME);
    saveText(empArray, size);

    //INPUT - retrieve data from text file and print
    printf("\n *** Now retrieving data from text file: %s\n", TEXTFILE_NAME);
    getText(empArrayFromTextFile, size);
    printEmployeeData(empArrayFromTextFile, size);

    //OUTPUT - save data to binary file
    printf("\n *** Now saving data to binary file: %s\n", BINARYFILE_NAME);
    saveBinary(empArray, size);

    //INPUT - retrieve data from bin file
    printf("\n *** Now retrieving data from binary file: %s\n", BINARYFILE_NAME);
    getBinary(empArrayFromBinFile, size);
    printEmployeeData(empArrayFromBinFile, size);

    return 0;
}

/***************************************
* void swapEmployeeData()
*
* Swap employee data within array
*
* in  - struct Employee pointer
* in  - index 1, index 2
*
* Returns: swap struct data
*
***************************************/
void swapEmployeeData(struct Employee* ePtr, int i1, int i2)
{
    struct Employee temp;

    temp = ePtr[i1];
    ePtr[i1]=ePtr[i2];
    ePtr[i2]=temp;
}

/***************************************
* void quickSortEmployeeData()
*
* Sort employee data using quicksor
*
* in  - struct Employee pointer
* in  - beg index, ending index
*
* Returns: sorted array of em data
*
***************************************/
void quickSortEmployeeData(struct Employee* ePtr, int beg, int end)
{
    //return if array size is 1
    if(beg >= end) return;

    //set parameters
    int l = beg;
    int r = end - 1;
    int pivot = (ePtr[end].name)[0];

    //Swap around pivot
    while(l < r)
    {
        while((ePtr[l].name)[0] <= pivot && l < end) l++;
        while((ePtr[r].name)[0] >= pivot && r > 0) r--;

        //swap only if valid
        if(l < r) swapEmployeeData(ePtr, l, r);
    }
    //swap pivot with left index if valid
    if ((ePtr[l].name)[0]>(ePtr[end].name)[0]) swapEmployeeData(ePtr, l, end);

    //recursive call
    quickSortEmployeeData(ePtr, beg, l-1);
    quickSortEmployeeData(ePtr, l+1, end);
}

/***************************************
* void getEmployeeData()
*
* Gets employee data from user
*
* in  - struct Employee pointer
* in  - array size ptr
*
* Returns: array of employee data and size
*
***************************************/
void getEmployeeData(struct Employee* ePtr, int* size)
{
    *size = 0;

    //INPUT - prompt for name
    printf("Enter employee name (or 0 to exit): ");
    gets(ePtr[*size].name);

    //WHILE - check for sentry exit
    while(ePtr[*size].name[0] != '0' && *size < MAX_SIZE)
    {
        //INPUT - employee salary
        printf("Enter employee salary: ");
        scanf("%lf", &(ePtr[*size].salary));

        //CALC - calc employee data
        ePtr[*size].rate = getRate(ePtr[*size].salary);
        ePtr[*size].raise = getRaise(ePtr[*size].salary, ePtr[*size].rate);
        ePtr[*size].newSalary = ePtr[*size].salary + ePtr[*size].raise;


        //flush line feed/carriage return
        getchar();
        (*size)++;

        //INPUT - employee salary
        printf("Enter employee name (or 0 to exit): ");
        gets(ePtr[*size].name);
    } //end while
}

/***************************************
* void printEmployeeData()
*
* Prints employee data to console
*
* in  - struct Employee pointer
* in  - array size
*
* Returns: nothing
*
***************************************/
void printEmployeeData(struct Employee* empPtr, int size)
{
    const int NAME_COL = 10;
    const int SAL_COL = 12;
    const int RATE_COL = 10;

    int i;
    double totalSalary = 0, totalRaise = 0, totalNewSalary = 0;

    //OUTPUT - header
    printf("\n %-*s%-*s%-*s%-*s%-*s\n\n",
           NAME_COL, "Name",
           SAL_COL, "Salary",
           RATE_COL, "Raise %",
           SAL_COL, "Raise",
           SAL_COL, "New Salary");

    //OUTPUT - employee data from array of structs
    for(i = 0; i < size; i++)
    {
        printf(" %-*s%*.2lf%*.2f%*.2lf%*.2lf\n",
           NAME_COL, empPtr[i].name,
           SAL_COL - 2, empPtr[i].salary,
           RATE_COL, empPtr[i].rate,
           SAL_COL, empPtr[i].raise,
           SAL_COL, empPtr[i].newSalary);

           totalSalary += empPtr[i].salary;
           totalRaise += empPtr[i].raise;
           totalNewSalary += empPtr[i].newSalary;
    }

    //OUTPUT - totals for employee data
    printf(" %-*s%*.2lf%*.2lf%*.2lf\n",
       NAME_COL, "TOTAL",
       SAL_COL - 2, totalSalary,
       SAL_COL + RATE_COL, totalRaise,
       SAL_COL, totalNewSalary);
}

/***************************************
* float getRate()
*
* Calculates rate from salary
*
* in  - salary
*
* Returns: rate of salary
*
***************************************/
float getRate(double salary)
{
    float rate = 0;

    if(salary > 0 && salary < 30000) rate = 7;
    else if (salary >= 30000 && salary <= 40000) rate = 5.5;
    else rate = 4;

    return rate;
}

/***************************************
* double getRaise(double, float);
*
* Calculates raise from salary and rate
*
* in  - salary, rate
*
* Returns: raise
*
***************************************/
double getRaise(double salary, float rate)
{
    return salary * (rate/100);
}

/***************************************
* void saveText(struct Employee*, int);
*
* Saves Employee data as text
*
* in  - array ptr, size
*
* Returns: nothing
*
***************************************/
void saveText(struct Employee* empPtr, int size)
{
    int i;
    FILE* fPtr;

    //open file
    fPtr = fopen(TEXTFILE_NAME, "w");

    //save data to text file
    for(i = 0; i < size; i++)
    {
        fprintf(fPtr, "%s\n", empPtr[i].name);
        fprintf(fPtr, "%lf %f %lf %lf\n",
                empPtr[i].salary,
                empPtr[i].rate,
                empPtr[i].raise,
                empPtr[i].newSalary);
    }

    //close file
    fclose(fPtr);
}

/***************************************
* void getText(struct Employee*, int);
*
* Get Employee data from text
*
* in  - array ptr, size
*
* Returns: nothing
*
***************************************/
void getText(struct Employee* empPtr, int size)
{
    int i;
    FILE* fPtr;

    //open file
    fPtr = fopen(TEXTFILE_NAME, "r");

    //check if file doesnt exist
    if(fPtr == NULL)
    {
        printf("\nThe file could not be opened\n");
        EXIT_FAILURE;
    }

    //get data from text file
    for(i = 0; i < size; i++)
    {
        //gets string from text file
        fgets(empPtr[i].name, sizeof(empPtr[i].name), fPtr);

        //gets rid of new line character
        (empPtr[i].name)[strlen(empPtr[i].name) - 1] = '\0';

        //scans in salary data
        fscanf(fPtr, "%lf %f %lf %lf\n",
                &empPtr[i].salary,
                &empPtr[i].rate,
                &empPtr[i].raise,
                &empPtr[i].newSalary);
    }

    //close file
    fclose(fPtr);
}

/***************************************
* void saveBinary(struct Employee*, int);
*
* Save Employee data to binary
*
* in  - array ptr, size
*
* Returns: nothing
*
***************************************/
void saveBinary(struct Employee* empPtr, int size)
{
    FILE* fPtr;

    //open the file
    fPtr = fopen(BINARYFILE_NAME, "wb");

    //write the data to bin
    fwrite(empPtr, sizeof(empPtr[0]), size, fPtr);

    fclose(fPtr);
}

/***************************************
* void getBinary(struct Employee*, int);
*
* Get Employee data from text
*
* in  - array ptr, size
*
* Returns: nothing
*
***************************************/
void getBinary(struct Employee* empPtr, int size)
{
    FILE* fPtr;

    //open the file
    fPtr = fopen(BINARYFILE_NAME, "rb");

    //check if file doesnt exist
    if(fPtr == NULL)
    {
        printf("\nThe file could not be opened\n");
        EXIT_FAILURE;
    }

    //reads data into array
    fread(empPtr, sizeof(empPtr[0]), size, fPtr);

    fclose(fPtr);
}

/*
Enter employee name (or 0 to exit): Susan
Enter employee salary: 25000
Enter employee name (or 0 to exit): Jim
Enter employee salary: 30000
Enter employee name (or 0 to exit): Gloria
Enter employee salary: 35000
Enter employee name (or 0 to exit): Ros
Enter employee salary: 40000
Enter employee name (or 0 to exit): Ben
Enter employee salary: 40001
Enter employee name (or 0 to exit): Tim
Enter employee salary: 45000
Enter employee name (or 0 to exit): 0

 Name      Salary      Raise %   Raise       New Salary

 Ben         40001.00      4.00     1600.04    41601.04
 Gloria      35000.00      5.50     1925.00    36925.00
 Jim         30000.00      5.50     1650.00    31650.00
 Ros         40000.00      5.50     2200.00    42200.00
 Susan       25000.00      7.00     1750.00    26750.00
 Tim         45000.00      4.00     1800.00    46800.00
 TOTAL      215001.00              10925.04   225926.04

 *** Now saving data to text file: Homework05_EmployeeData.txt

 *** Now retrieving data from text file: Homework05_EmployeeData.txt

 Name      Salary      Raise %   Raise       New Salary

 Ben         40001.00      4.00     1600.04    41601.04
 Gloria      35000.00      5.50     1925.00    36925.00
 Jim         30000.00      5.50     1650.00    31650.00
 Ros         40000.00      5.50     2200.00    42200.00
 Susan       25000.00      7.00     1750.00    26750.00
 Tim         45000.00      4.00     1800.00    46800.00
 TOTAL      215001.00              10925.04   225926.04

 *** Now saving data to binary file: Homework05_EmployeeData.bin

 *** Now retrieving data from binary file: Homework05_EmployeeData.bin

 Name      Salary      Raise %   Raise       New Salary

 Ben         40001.00      4.00     1600.04    41601.04
 Gloria      35000.00      5.50     1925.00    36925.00
 Jim         30000.00      5.50     1650.00    31650.00
 Ros         40000.00      5.50     2200.00    42200.00
 Susan       25000.00      7.00     1750.00    26750.00
 Tim         45000.00      4.00     1800.00    46800.00
 TOTAL      215001.00              10925.04   225926.04

Process returned 0 (0x0)   execution time : 27.943 s
Press any key to continue.

*/
