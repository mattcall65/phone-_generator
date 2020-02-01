// Matt Callahan	2-1-20		Random phone# generator

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printNum(int);

int main()
{
	// seeds the random # generator
	srand(time(0));

	int numofDigits = 3, amountPhoneNums; 

	// reads in amount of random phone #'s wanted
	scanf("%d",&amountPhoneNums);

	// prints the amount desired out
	for(int i = 0; i < amountPhoneNums; i++)
	{	
		// loop creates a phone number
		for(int j = 0; j < 3; j++)
		{
			// 4 digits
			if(j == 2)
			{
				printNum(numofDigits + 1); 
				break;
			}

			// 3 digits
			printNum(numofDigits);
			printf("-");
		}
		printf("\n");
	}
	

	return EXIT_SUCCESS;	
}



void printNum(int numofDigits)
{
	for(int i = 0; i < numofDigits; i++)
	{
		// modulus guarentees a digit from 0-9
		printf("%d", rand() % 9);
	}
}