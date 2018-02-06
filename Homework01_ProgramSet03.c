#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*******************************************
/* Homework 01 - Program Set 03
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
	double initialCost;
	double currentCost;
	double profit;
	struct Node *next;
};

int main()
{
	//DECLARATION
	
	//Constants for column width output spacing
	const int INPUT_COL = 24;
	const int OUTPUT_COL = 24;
	const int EXIT_COL = 41;

	//Declaration of member variables
	struct Node *head;
	struct Node *node;
	struct Node *tail;
	char buffer[100];
	double sumProfits;

	//Variable initialization
	head = NULL;
	node = NULL;
	tail = NULL;
	
	//INPUT
	// Allows user to input stock information, exit with 0
	// Data stored in a linked list
	printf("\n%*s\n\n", EXIT_COL, "Enter 0 for 'Stock name' to exit");
	printf("%*s ", INPUT_COL, "Stock name:");
	while (fgets(buffer, sizeof(buffer), stdin) == NULL)
	    printf("%-*s", INPUT_COL, "Stock name:");
	
	//checks for exit character 0
	while(buffer[0] != '0')
	{
		//allocates memory for size of node, and string inside node
		//copies characters from input buffer into node name var
		node = (struct Node*) malloc(sizeof(struct Node));
		node->name = (char*) malloc(sizeof(char) * (strlen(buffer) + 1));
		strncpy(node->name, buffer, strlen(buffer)+1);

		printf("%*s ", INPUT_COL, "Number of shares:");
		scanf("%d", &node->numShares);

		printf("%*s $", INPUT_COL, "Buying price per share:");
		scanf("%lf", &node->buyPricePerShare);

		printf("%*s $", INPUT_COL, "Current price per share:");
		scanf("%lf", &node->currentPricePerShare);

		printf("%*s $", INPUT_COL, "Yearly fees:");
		scanf("%lf", &node->yearlyFees);
		getchar();
		
		//CALCULATIONS
		// calcs per instructions
		node->initialCost = node->numShares * node->buyPricePerShare;
		node->currentCost = node->numShares * node->currentPricePerShare;
		node->profit = node->currentCost - node->initialCost - node->yearlyFees;

		//assigns pointers to linked list nodes
		if(head == NULL)
			head = node;
		else
			tail->next = node;
		tail = node;
		tail->next = NULL;

		//INPUT
		//get next input or exit 
		printf("\n%*s ", INPUT_COL, "Stock name:");
		while (fgets(buffer, sizeof(buffer), stdin) == NULL)
		    printf("%-*s", INPUT_COL, "Stock name:");
	}

	//OUTPUT
	printf("\n\n%*s\n\n", EXIT_COL, "---------- Stock Summary ----------");
	
	//traverse linked list and output stock name, share costs and profit
	node = head;
	sumProfits = 0;
	while(node != NULL)
	{
		sumProfits += node->profit;

		printf("%*s %s", OUTPUT_COL, "Stock Name:", node->name);
		printf("%*s $%.2lf\n", OUTPUT_COL, "Initial Cost:", node->initialCost);
		printf("%*s $%.2lf\n", OUTPUT_COL, "Current Cost:", node->currentCost);
		printf("%*s $%.2lf\n\n", OUTPUT_COL, "Profit:", node->profit);

		node = node->next;
	}

	//output total profits for all stocks
	printf("\n%s: $%.2lf\n\n", "Total profits for all stocks", sumProfits);

	//FREE Memory
	while(head != NULL)
	{
		node = head;
		head = head->next;
		free(node); 
	}

	return 0;
}



/*

         Enter 0 for 'Stock name' to exit

             Stock name: IBM
       Number of shares: 150
 Buying price per share: $11.33
Current price per share: $13.33
            Yearly fees: $5.00

             Stock name: ORACLE
       Number of shares: 215
 Buying price per share: $10.77
Current price per share: $12.25
            Yearly fees: $3.50

             Stock name: SUN MICRO
       Number of shares: 355
 Buying price per share: $25.55
Current price per share: $35.75
            Yearly fees: $12.25

             Stock name: LINKSYS
       Number of shares: 75
 Buying price per share: $22.34
Current price per share: $23.34
            Yearly fees: $6.00

             Stock name: CISCO
       Number of shares: 50
 Buying price per share: $45.36
Current price per share: $50.86
            Yearly fees: $1.50

             Stock name: 0


      ---------- Stock Summary ----------

             Stock Name: IBM
           Initial Cost: $1699.50
           Current Cost: $1999.50
                 Profit: $295.00

             Stock Name: ORACLE
           Initial Cost: $2315.55
           Current Cost: $2633.75
                 Profit: $314.70

             Stock Name: SUN MICRO
           Initial Cost: $9070.25
           Current Cost: $12691.25
                 Profit: $3608.75

             Stock Name: LINKSYS
           Initial Cost: $1675.50
           Current Cost: $1750.50
                 Profit: $69.00

             Stock Name: CISCO
           Initial Cost: $2268.00
           Current Cost: $2543.00
                 Profit: $273.50


Total profits for all stocks: $4560.95

*/
