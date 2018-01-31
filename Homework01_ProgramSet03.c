#include<stdio.h>

/*******************************************
/* Homework 01 - Program Set 02
/*
/* This program maintains information about
/* your stocks.  The user will enter the
/* data for each stock: stock name, number
/* of shares, buy price, current price,
/* and yearly fees.  The program will calculate
/* the inital cost, current cost, and profit.
/*
/* The program will print out the stock name,
/* initial cost, current cost, and profit
/& for each stock
/*
/* The program will finally calculate and print
/* the total profit for all of the stocks
/*
/* Program Set 03
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

//Declaration for node of linked list
struct Node
{
    char *name;
    int numShares;
    double buyPricePerShare;
    double currentPricePerShare;
    double yearlyFees;
    double initalCost;
    double currentCost;
    double profit;
    struct Node *next;
};

int main()
{
	//DECLARATION
	const INPUT_COL = 24;
	const OUTPUT_COL = 13;

	struct Node *head;
	struct Node *node;
	char buffer[100];

    //INPUT
    printf("%-*s", INPUT_COL, "Stock name:");
    while (fgets(buffer, sizeof(buffer), stdin) == NULL)
        printf("%-*s", INPUT_COL, "Stock name:");

    node = (struct Node*) malloc(sizeof(struct Node));
    node->name = (char*) malloc(sizeof(char) * (strlen(buffer) + 1));
    strncpy(node->name, buffer, strlen(buffer)+1);

    printf("%-*s", INPUT_COL, "Number of shares:");
	scanf("%d", &node->numShares);

	printf("%-*s", INPUT_COL, "Buying price per share:");
	scanf("%f", &node->buyPricePerShare);

	printf("%-*s", INPUT_COL, "Current price per share:");
	scanf("%f", &node->currentPricePerShare);

	printf("%-*s", INPUT_COL, "Yearly fees:");
	scanf("%f", &node->yearlyFees);

	node->initalCost = node->numShares * node->currentPricePerShare;
	node->currentCost = node->numShares * node->currentPricePerShare;
	node->profit = node->currentCost - node->initalCost - node->yearlyFees;


    printf(\n"%-*s%s\n", OUTPUT_COL, "Stock Name:", node->name);
    printf("%-*s\n", OUTPUT_COL, "Initial Cost:");
    printf("%-*s\n", OUTPUT_COL, "Current Cost:");
    printf("%-*s\n", OUTPUT_COL, "Profit:");





	//CALCULATIONS


	//OUTPUT

	//output for floats restricted to 2 decimal spaces



    return 0;
}



/*
Total miles driven per day:  100
Cost per gallon of gasoline: 3
Average miles per gallon:    19
Parking fees per day:        3
Tolls per day:               4

The total miles driven per day: 100
The cost per gallon of gasoline: $ 3.00
The average miles per gallon: 19 mph
The parking fees per day: $ 3.00
The tolls per day: $4.00

Your daily cost of driving to work is $ 22.79
Process returned 0 (0x0)   execution time : 29.239 s
Press any key to continue.

*/
