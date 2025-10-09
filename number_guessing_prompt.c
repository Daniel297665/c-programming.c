//c program for number guessing game
/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:Initiating a number guessing game
*/
#include<stdio.h> //printf(),scanf()
#include<stdlib.h>
#include<time.h>
//main function

int main() {
	//variable declaration
	int secret,guess,attempts =0;
	srand(time(0));
	secret=rand() %20+1; //a random number from 1 to 20
	
	//prompt the user for input
	printf("guess the number between 1 and 20\n");
	
	while(1) {
		printf("Enter your guess: ");
		scanf("%d", &guess);
		attempts++;
	
		//display output	
		if(guess > secret)
			printf("Too high!\n");
		else if(guess < secret)
			printf("Too low!\n");
		else{
			printf("Congratulations! you guessed it in %d attempts.\n", attempts);
			break;
		}
	}
	return 0;
}