//c program to evalute volume and surface_area of a cylinder
/*
Name:Daniel Nyakeramba 
Reg:PA106/G/2878825/25
Unit:Introduction to programming and problem solving
Description:evaluating volume and surface area of a cylinder
*/

#include<stdio.h> //scanf(),printf()
//main function
int main() {
	float height,radius,surface_area,volume;
	
	//prompt the user for input
	printf("Enter height of the cylinder: ");
	scanf("%f", &height);
	
	printf("Enter the radius of the cylinder: ");
	scanf("%f", &radius);
	
	//calculate the surface_area and volume of the cylinder
	volume=(3.142*radius*radius*height);
	surface_area=(3.142*radius*radius)+(3.142*radius*height);
	
	//display the results
	printf("surface_area of the cylinder=%.3f\n", surface_area);
	printf("n/volume of the cylinder=%.3f", volume);
	
	
	
	return 0;//execution successful
	
}