/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:C program for fare calculation 
*/

#include<stdio.h>

//function prototype
float calculationfare(float distance);
int main(){
	float distance;
	
	//function call
	printf("enter distance travelled (in km): ");
	scanf("%f", &distance);
	
	printf("total fare=ksh%.2f\n", calculationfare(distance));
	return 0;
}

//function declaration
float calculationfare(float distance) {
	return distance * 50;
}