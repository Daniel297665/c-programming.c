//C Progam prompt the user
/*
Name:Daniel Nyakeramba 
Reg No:PA106/G/28788/25
Unit:Introduction to programming and problem solving
*/

#include<stdio.h> //scanf(),printf()
//main function
int main() {
	//variable declaration
	float age,height;
	char id_number;
	char weight;
	
	//prompt the user for input
	printf("Enter weight: ");
	scanf("%d", &weight);
	
	printf("Enter height: ");
	scanf("%f", &height);
	
	printf("Enter age: ");
	scanf("%f", &age);
	
	printf("Enter id_number: ");
	scanf("%ld", &id_number);
	
	return 0;//execution successful
}
	
