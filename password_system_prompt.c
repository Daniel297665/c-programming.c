//c program to prompt password system
/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:Password system prompt
*/
#include<stdio.h> //scanf(),printf()
#include<string.h>

//main function 
int main() {
	//variable declaration
	char password[20];
	
	do{
		//prompt user for input
		printf("Enter password: ");
		scanf("%s", password);
		
	    //display output	
		if(strcmp(password, "1234") !=0)
			printf("Incorrect password! Try again.\n");
		
	} while(strcmp(password, "1234") !=0);
	
	printf("Access Granted\n");
	
	return 0;
}