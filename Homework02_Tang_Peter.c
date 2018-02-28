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

void initTransportCost(int costDB[]
                       [TOTAL_DESTINATION_CITIES]
                       [TOTAL_TRANS_TYPES]);


int main()
{
	//DECLARATION of CONSTANTS
	const int SPLASH_BANNER_LENGTH = 44;
	const int EXPENSE_BANNER_LENGTH = 58;


    //VAR DECLARATIONS
    int transCostDB[TOTAL_SOURCE_CITIES]
            [TOTAL_DESTINATION_CITIES]
            [TOTAL_TRANS_TYPES];

	//OUTPUT SPLASH MENU
	printf("\n\n\n\n ");
	printStars(SPLASH_BANNER_LENGTH);
	printf("\n\n\n WELCOME TO THE TRIP EXPENSE CALCULATOR\n\n\n\n ");
	printStars(SPLASH_BANNER_LENGTH);
	puts("");
	clearBuffer(getchar());
	system("cls");


	//OUTPUT SOURCE CITY MENU
	getInput(4, "ENTER THE SOURCE CITY :",
          "B", "Baltimore",
          "C", "Chattanooga",
          "N", "Nashville",
          "P", "Pasadena");

    //TODO process source input

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

    return inputChar;
}

/***************************************
* void clearBuffer()
*
* Clears the input buffer
*
* Returns: nothing
*
***************************************/
void clearBuffer(char input)
{
    //gets char, clearing input buffer until \n or EOF
    while(input != '\n' && input != EOF) input = getchar();
}

void initTransportCost(int costDB[][TOTAL_DESTINATION_CITIES][TOTAL_TRANS_TYPES])
{

    costDB[BALTIMORE][DENVER][AIR] = 5000;
    costDB[BALTIMORE][DENVER][TRAIN] = 2500;
    costDB[BALTIMORE][DENVER][BUS] = 2000;



}

/*
//TODO

*/
