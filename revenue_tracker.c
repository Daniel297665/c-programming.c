/*
Name:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:C program for weekly revenue tracker
*/

#include<stdio.h>

int main() {
	float revenue[7];float total=0,average;int i;
	
	printf("===weekly revenue tracker===\n");
	
	//revenue input for each day
	for(i=0; i<7; i++) {
		printf("enter revenue for day %d: ", i+1);
		scanf("%f", &revenue[i]);
		total += revenue[i]; // add it to total
	}
	
	//average calculation
	average=total /7;
	
	//display results
	printf("total weekly revenue: %.2f\n", total);
	printf("average daily revenue: %.2f\n", average);
	
	return 0;
}
 	