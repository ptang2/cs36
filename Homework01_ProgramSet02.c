#include<stdio.h>

/*******************************************
/* Homework 01 - Program Set 02
/*
/* This program calculates your daily driving
/* cost so that you can estimate how much money
/* could be saved by car pooling, which also
/* has other advantages such as reducing
/* carbon emissions and reducing traffic
/*
/* The user will input the following:
/* a) Total miles driven per day.
/* b) Cost per gallon of gasoline.
/* c) Average miles per gallon.
/* d) Parking fees per day.
/* e) Tolls per day.
/*
/* Program Set 02
/*
/* Peter Tang
/* 959213
/* 1/30/18
*******************************************/

int main()
{
	//DECLARATION

	const int INPUT_COL = 28;
	
	int milesPerDay;
	float costPerGallon;
	int avgMilesPerGallon;
	float parkingFeesPerDay;
	float tollsPerDay;
	float totalDailyDrivingCost;

	//INPUT

	//prompts for and receives input via scanf to capture input data
	printf("%*s: ", INPUT_COL, "Total miles driven per day");
	scanf("%d", &milesPerDay);

	printf("%*s: $", INPUT_COL, "Cost per gallon of gasoline");
	scanf("%f", &costPerGallon);

	printf("%*s: ", INPUT_COL, "Average miles per gallon");
	scanf("%d", &avgMilesPerGallon);

	printf("%*s: $", INPUT_COL, "Parking fees per day");
	scanf("%f", &parkingFeesPerDay);

	printf("%*s: $", INPUT_COL, "Tolls per day");
	scanf("%f", &tollsPerDay);

	//CALCULATIONS

	totalDailyDrivingCost =
		tollsPerDay +
		parkingFeesPerDay +
		(milesPerDay/(float)avgMilesPerGallon) * costPerGallon;

	//OUTPUT

	//output for floats restricted to 2 decimal spaces
	printf("\nThe total miles driven per day: %d\n", milesPerDay);
	printf("The cost per gallon of gasoline: $ %.2f\n", costPerGallon);
	printf("The average miles per gallon: %d mph\n", avgMilesPerGallon);
	printf("The parking fees per day: $ %.2f\n", parkingFeesPerDay);
	printf("The tolls per day: $%.2f\n", tollsPerDay);
	printf("Your daily cost of driving to work is $ %.2f\n", totalDailyDrivingCost);


	return 0;
}

/*
  Total miles driven per day: 100
 Cost per gallon of gasoline: $3.00
    Average miles per gallon: 19
        Parking fees per day: $3.00
               Tolls per day: $4.00

The total miles driven per day: 100
The cost per gallon of gasoline: $ 3.00
The average miles per gallon: 19 mph
The parking fees per day: $ 3.00
The tolls per day: $4.00
Your daily cost of driving to work is $ 22.79
*/
