/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:C program to calculate electric bill
*/

#include<stdio.h>
//function prototype
float calculateelectricbill(int units);
int main() {
	int units;
	//function call
	printf("enter the number of units consumed: ");
	scanf("%d", &units);
	
	printf("total electric bill=ksh %.2f\n", calculateelectricbill(units));
	return 0;
	}
	//function declaration
float calculateelectricbill(int units) {
	float bill=0;
	
	if(units<=100) {
		bill=units*10;
	}
	else if (units<=200) {
		bill=(100*10) + ((units -100)*15);
	}
	else{
		bill=(100*10)+(100*15) +((units-200)*20);
	}
	return bill;
}