//c program to display bank balance after withdrawal
/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:Displaying bank balance after withdrawal
*/
#include<stdio.h> //printf(),scanf()
//main function

int main() {
	//variable declaration 
	float balance,withdraw;
	
	//input the user
	printf("Enter initial account balance: ");
	scanf("%f", &balance);
	
	//input the user
	while(balance > 0) {
		printf("\nEnter amount to withdraw: ");
		scanf("%f", &withdraw);
	// display output	
		balance-=withdraw;
		printf("Remaining balance: %.2fKsh\n", balance);
		
		if(balance <=0) {
			printf("Insufficient balance!\n");
		}
	}
	
	return 0;
}