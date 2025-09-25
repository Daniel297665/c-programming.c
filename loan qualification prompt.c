//variables and data type c
/*
Name:Daniel Nyakeramba
Reg no:PA106/G/28788/25
Description:variables and data types
*/

#include<stdio.h> //scanf(),prinf()
//main function
int main(){
	//variable declaration
	char name[]={};  
	int age;       //%d
	double income;  //lf
	
	//prompt the user for input
	printf("kindly enter the name: ");
	scanf("%s", &name);
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("Enter the amount of income: ");
	scanf("%lf", &income);
	
	//display loan qualification
	if(age>=21 &income >=21000) {
		printf("congratulations you qualify for the loan.\n");
	} else {
		printf("sorry,we are unable to offer you the loan.\n");
	}
	
	return 0;//execution successful
}
	
	



