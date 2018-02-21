#include <stdio.h>
#include <stdlib.h>

/*******************************************
/* Homework 02
/*
/* This program calculates and outputs
/* total travel expenses through a
/* comprehensive menu.  The program outputs
/* the following:
/*
/* Starting destination
/* End destination
/* Transportation charges
/* Number of meals in a day
/* Room charges
/* Food charges
/* Hotel charges
/* Total charges
/*
/* Peter Tang
/* 959213
/* 2/20/18
*******************************************/

/*
* This would be easier using a header file, but
* specifications only allow for a single file submission
*/

//ENUM DEFS
enum SourceCity
{
    BALTIMORE,
    CHATTANOOGA,
    NASHVILLE,
    PASADENA
};

enum DestCity
{
    DENVER,
    MADISON,
    KNOXVILLE,
    CLARKSON
};

enum TransType
{
    AIR,
    TRAIN,
    BUS
};

enum HotelType
{
    FIVE_STARS = 500,
    THREE_STARS = 300,
    ORDINARY = 100
};

enum MealType
{
    VEGETARIAN = 15,
    NON_VEGETARIAN = 30,
    CONTINENTAL = 10
};

/***************************************
* void printStars(int num)
*
* Prints asterisks with new line
*
* in  - number of stars to print
* line of asterisks w/ new line
*
* Returns: nothing
*
***************************************/
void printStars(int num);


int main()
{
	//DECLARATION of CONSTANTS
	const int SPLASH_BANNER_LENGTH = 44;
	const int EXPENSE_BANNER_LENGTH = 58;

	//OUTPUT SPLASH MENU
	printf("\n\n\n\n ");
	printStars(SPLASH_BANNER_LENGTH);
	printf("\n\n\n\n WELCOME TO THE TRIP EXPENSE CALCULATOR\n\n\n\n ");
	printStars(SPLASH_BANNER_LENGTH);
	getchar();
	system("cls");


	//OUTPUT SOURCE CITY MENU
	printf("\n\n\n");
	printf(" ENTER THE SOURCE CITY :\n\n");
	printf(" B for Baltimore\n\n");
	printf(" C for Chattanooga\n\n");
	printf(" N for Nashville\n\n");
	printf(" P for Pasadena\n\n\n");

    //TODO input source selection




	//OUTPUT
    printStars(5);





	return 0;
}

/***************************************
* void printStars(int num)
*
* Prints asterisks with new line
*
* in  - number of stars to print
* line of asterisks w/ new line
*
* Returns: nothing
*
***************************************/
void printStars(int num)
{
    int i;
    for(i = 0; i < num; i++)
        printf("*");
    puts("");
}

/*
//TODO

*/
