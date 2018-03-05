#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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

//GLOBAL VARS
const int TOTAL_SOURCE_CITIES = 4;
const int TOTAL_DESTINATION_CITIES = 4;
const int TOTAL_TRANS_TYPES = 3;

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
    FIVE_STARS  = 500,
    THREE_STARS = 300,
    ORDINARY    = 100
};

enum MealType
{
    VEGETARIAN     = 15,
    NON_VEGETARIAN = 30,
    CONTINENTAL    = 10
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

/***************************************
* void getInput(int, char*, ...)
*
* Takes parameters for menu prompt via
* var args and gets user input
*
* int   - number of option pairs
* char* - menu title or question
*
* Returns: user input option
*
***************************************/
char getInput(int, char*, ...);

/***************************************
* void clearBuffer()
*
* Clears the input buffer
*
* Returns: nothing
*
***************************************/
void clearBuffer(char);

/***************************************
* void initTRansportCost()
*
* Normally, you would read in data from a database,
* but because we were not provided one, I decided
* to hardcode allt he values in
*
* Returns: propagated array with data
***************************************/
void initTransportCost(int costDB[]
                       [TOTAL_DESTINATION_CITIES]
                       [TOTAL_TRANS_TYPES]);

//TRIP object
struct Trip
{
	SourceCity sourceCity;
	DestCity destCity;
	double transCharges;
	int numDaysStay;
	int numMealsDay;
	double roomCharges;
	double foodCharges;
	double hotelCharges;
	double totalCharge;
};

int main()
{
	//DECLARATION of CONSTANTS
	const int SPLASH_BANNER_LENGTH = 44;
	const int EXPENSE_BANNER_LENGTH = 58;


    //VAR DECLARATIONS
    int transCostDB[TOTAL_SOURCE_CITIES]
            [TOTAL_DESTINATION_CITIES]
            [TOTAL_TRANS_TYPES];
	struct Trip thisTrip;
	char inpuChar;
	
	//INIT DATA
	//NOrmally, you propagate data from a databse,
	//but I decided to hardcode these values
	initTransportCost(transCostDB[][TOTAL_DESTINATION_CITIES][TOTAL_TRANS_TYPES]);

	//OUTPUT SPLASH MENU
	printf("\n\n\n\n ");
	printStars(SPLASH_BANNER_LENGTH);
	printf("\n\n\n WELCOME TO THE TRIP EXPENSE CALCULATOR\n\n\n\n ");
	printStars(SPLASH_BANNER_LENGTH);
	puts("");
	clearBuffer(getchar());
	system("cls");


	//OUTPUT SOURCE CITY MENU
	inputChar = getInput(4, "ENTER THE SOURCE CITY :",
          "B", "Baltimore",
          "C", "Chattanooga",
          "N", "Nashville",
          "P", "Pasadena");

    //TODO process source input
	switch (inputChar)
	{
		case 'B': thisTrip.sourceCity = BALTIMORE; break;
		case 'C': thisTrip.sourceCity = CHATTANOOGA; break;
		case 'N': thisTrip.sourceCity = NASHVILLE; break;
		case 'P': thisTrip.sourceCity = PASADENA; break;
	}

	//OUTPUT DESTINATION CITY MENU
	getInput(4, "ENTER THE DESINATION CITY :",
          "D", "Denver",
          "M", "Madison",
          "C", "clarksville",
          "K", "Knoxville");

	//TODO process destination

	//OUTPUT TRANSPORT MENU
    getInput(3, "ENTER THE MODE OF TRANSPORT :",
      "A", "Air",
      "R", "Train",
      "B", "Bus");

	//TODO process transport

    //OUTPUT HOTEL MENU
    getInput(3, "ENTER THE TYPE OF HOTEL",
             "F", "Five Star",
             "T", "Three Star",
             "O", "Ordinary");

	//TODO process hotel

    //OUTPUT DAYS PROMPT
	getInput(0, "ENTER THE NUMBER OF DAYS OF STAY");

	//TODO process DAYS

    //OUTPUT FOOD MENU
    getInput(3, "ENTER THE TYPE OF FOOD",
             "V", "Veg",
             "N", "Non-Veg",
             "C", "Continental");

	//TODO process food menu

    //OUTPUT DAYS PROMPT
	getInput(0, "How many meals would you like to take in the Hotel?");

	//TODO process days

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

/***************************************
* void getInput(int, char*, ...)
*
* Takes parameters for menu prompt via
* var args and gets user input
*
* int   - number of option pairs
* char* - menu title or question
*
* Returns: user input option
*
***************************************/
char getInput(int numOptions, char* title, ...)
{
    int varIndex;       //index of each pair of option
    int optionChar;     //buffer for char arg
    char* optionFull;   //description str for option
    char inputChar;     //user input char
    char charBuffer[256];//holds saved string

    va_list argList;                //va_list is arglist
    va_start (argList, numOptions); //init va_arg list with num options

    //CONSTRUCT string buffer and display menu incase erroneous input
    strcat(charBuffer, "\n\n\n ");
    strcat(charBuffer, title);
    strcat(charBuffer, "\n\n");

    //loops through input options
    for(varIndex = 0; varIndex < numOptions; varIndex++)
    {
        //cannot directly call va_arg into printf
        //MUST capture into variable outside
        optionChar = va_arg(argList, char*);
        optionFull = va_arg(argList, char*);
        strcat(charBuffer, " ");
        strcat(charBuffer, optionChar);
        strcat(charBuffer, " for ");
        strcat(charBuffer, optionFull);
        strcat(charBuffer, "\n\n");
    }
    strcat(charBuffer, "\n ");

    va_end(argList);    //end va_args
    do
    {
        printf("%s", charBuffer);
        inputChar = getchar();
        clearBuffer(inputChar);
        system("cls");

    }while(inputChar == '\n' || !isalpha(inputChar));

    charBuffer[0] = 0;

    return toupper(inputChar);
}

/***************************************
* void clearBuffer()
*
* Clears the input buffer
*
* Returns: nothing
***************************************/
void clearBuffer(char input)
{
    //gets char, clearing input buffer until \n or EOF
    while(input != '\n' && input != EOF) input = getchar();
}

/***************************************
* void initTRansportCost()
*
* Normally, you would read in data from a database,
* but because we were not provided one, I decided
* to hardcode allt he values in
*
* Returns: propagated array with data
***************************************/
void initTransportCost(int costDB[][TOTAL_DESTINATION_CITIES][TOTAL_TRANS_TYPES])
{
	costDB[BALTIMORE][DENVER][AIR] = 5000
	costDB[BALTIMORE][DENVER][TRAIN] = 2500
	costDB[BALTIMORE][DENVER][BUS] = 2000
	costDB[BALTIMORE][MADISON][AIR] = 4000
	costDB[BALTIMORE][MADISON][TRAIN] = 2000
	costDB[BALTIMORE][MADISON][BUS] = 1000
	costDB[BALTIMORE][KNOXVILLE][AIR] = 5000
	costDB[BALTIMORE][KNOXVILLE][TRAIN] = 2500
	costDB[BALTIMORE][KNOXVILLE][BUS] = 2000
	costDB[BALTIMORE][CLARKSON][AIR] = 2500
	costDB[BALTIMORE][CLARKSON][TRAIN] = 800
	costDB[BALTIMORE][CLARKSON][BUS] = 1000
	costDB[CHATTANOOGA][DENVER][AIR] = 2500
	costDB[CHATTANOOGA][DENVER][TRAIN] = 500
	costDB[CHATTANOOGA][DENVER][BUS] = 600
	costDB[CHATTANOOGA][MADISON][AIR] = 4000
	costDB[CHATTANOOGA][MADISON][TRAIN] = 2300
	costDB[CHATTANOOGA][MADISON][BUS] = 1300
	costDB[CHATTANOOGA][KNOXVILLE][AIR] = 4000
	costDB[CHATTANOOGA][KNOXVILLE][TRAIN] = 1600
	costDB[CHATTANOOGA][KNOXVILLE][BUS] = 1400
	costDB[CHATTANOOGA][CLARKSON][AIR] = 6000
	costDB[CHATTANOOGA][CLARKSON][TRAIN] = 2000
	costDB[CHATTANOOGA][CLARKSON][BUS] = 1700
	costDB[NASHVILLE][DENVER][AIR] = 5000
	costDB[NASHVILLE][DENVER][TRAIN] = 1500
	costDB[NASHVILLE][DENVER][BUS] = 1400
	costDB[NASHVILLE][MADISON][AIR] = 2500
	costDB[NASHVILLE][MADISON][TRAIN] = 900
	costDB[NASHVILLE][MADISON][BUS] = 700
	costDB[NASHVILLE][KNOXVILLE][AIR] = 4000
	costDB[NASHVILLE][KNOXVILLE][TRAIN] = 1500
	costDB[NASHVILLE][KNOXVILLE][BUS] = 1000
	costDB[NASHVILLE][CLARKSON][AIR] = 4500
	costDB[NASHVILLE][CLARKSON][TRAIN] = 1700
	costDB[NASHVILLE][CLARKSON][BUS] = 1300
	costDB[PASADENA][DENVER][AIR] = 5000
	costDB[PASADENA][DENVER][TRAIN] = 2000
	costDB[PASADENA][DENVER][BUS] = 1400
	costDB[PASADENA][MADISON][AIR] = 4500
	costDB[PASADENA][MADISON][TRAIN] = 1900
	costDB[PASADENA][MADISON][BUS] = 1300
	costDB[PASADENA][KNOXVILLE][AIR] = 3000
	costDB[PASADENA][KNOXVILLE][TRAIN] = 1200
	costDB[PASADENA][KNOXVILLE][BUS] = 800
	costDB[PASADENA][CLARKSON][AIR] = 4500
	costDB[PASADENA][CLARKSON][TRAIN] = 1700
	costDB[PASADENA][CLARKSON][BUS] = 1300
}

/*
//TODO

*/
