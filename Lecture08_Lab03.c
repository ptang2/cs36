#include<stdio.h>

/*******************************************
/* Lecture 8 - Lab03
/*
/* This program exercises strings
/*
/* Peter Tang
/* 959213
/* 2/27/18
*******************************************/

void getStock(char* stockName, int* numShares, float* buyPrice, float* sellPrice)
{
    printf("Enter stock name: ");
    gets(stockName);
    printf("Enter number of shares: ");
    scanf("%d", numShares);
    printf("Enter buy price: ");
    scanf("%f", buyPrice);
    printf("Enter sell price: ");
    scanf("%f", sellPrice);
}

void calculate(int numShares, float buyPrice, float sellPrice, float* buyTotal, float* currentTotal, float* profit)
{
    *buyTotal = numShares * buyPrice;
    *currentTotal = numShares * sellPrice;
    *profit = *currentTotal - *buyTotal;
}

void print(char* stockName, float buyTotal, float currentTotal, float profit)
{
    printf("\nStock name: %s\n", stockName);
    printf("Buy total: %.2f\n", buyTotal);
    printf("Current total: %.2f\n", currentTotal);
    printf("Profit: %.2f\n", profit);
}

int main()
{
	char stockName[20];
	int numShares;
	float buyPrice;
	float sellPrice;
	float buyTotal;
	float currentTotal;
	float profit;

	getStock(stockName, &numShares, &buyPrice, &sellPrice);
	calculate(numShares, buyPrice, sellPrice, &buyTotal, &currentTotal, &profit);
	print(stockName, buyTotal, currentTotal, profit);



    return 0;
}

/*
Enter stock name: Poor man's stock
Enter number of shares: 10
Enter buy price: 1
Enter sell price: 2

Stock name: Poor man's stock
Buy total: 10.00
Current total: 20.00
Profit: 10.00

Process returned 0 (0x0)   execution time : 5.658 s
Press any key to continue.


*/
