//c program for internet data bundles
/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:Program to display menu data bundles
*/
#include<stdio.h> scanf(),printf()
//main function
int main (){
	//variable declaration
	int choice;
	
	//display mobile data bundle menu
	printf("Select data bundle: \n");
	printf("1. 100MB @50ksh\n");
	printf("2. 500MB @ 200ksh\n");
	printf("3. 1GB @ 350ksh\n");
	printf("4. 2GB @ 600\n");
	
	//prompt the user for input
	printf("Enter your choice(1-4): ");
	scanf("%d", &choice);
	
	//display selected bundle 
	switch(choice) {
	case 1:
		printf("You selected 100MB. cost =50ksh\n");
		break;
	case 2:
		printf("You selected 500MB. cost =200ksh\n");
		break;
	case 3:
		printf("You selected 1GB. cost =350ksh\n");
		break;
	case 4:
		printf("You selected 2GB. cost =600ksh\n");
		break;
	default:
		printf("invalid choice\n");
}

	return 0;
}