/*
NAME:Daniel Nyakeramba 
REG:PA106/G/28788/25
DESCRIPTION:C program to convert to celsius
*/

#include<stdio.h>

//function prototype
float converttocelsius(float fahrenheit);

int main () {
	float fahrenheit;
	
	//function call
	printf("enter temperatur in fahrenheit: ");
	 scanf("%f", &fahrenheit);
	 
	 printf("temperature in celsius =%.2fdegree_celsius\n", converttocelsius(fahrenheit));
	 return 0;

}
//function declaration
float converttocelsius(float fahrenheit) {
	return (fahrenheit - 32) * 5 / 9;
}