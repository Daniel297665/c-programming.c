//c program for bill calculation
/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:Program to certain number of water units consumed
*/
#include<stdio.h> scanf(),printf()
//main function
int main () {
	
//variable declaration 
 int units;
 float bill;
 
 //prompt the user for input
 printf("Enter water units consumed: ");
 scanf("%d", &units);

  //display bill  calculation
  if(units<=30) {
  	bill=units*20;
  }else if (units<=60) {
  	bill=units*25;
  } else {
  	bill=units*30;
  }
  //display output
  printf("Total water bill: %.2fksh\n", bill);
  
  return 0;
  
}