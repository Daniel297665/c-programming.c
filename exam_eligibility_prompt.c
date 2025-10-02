//c program for exam eligibility
/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:Program to certain student eligiblity for final exam
*/

#include<stdio.h> //printf(),scanf()
//main function
int main() {
//variable declaration
float attendance,marks;

  //prompt the user for input
  printf("Enter attendance percentage: ");
  scanf("%f", &attendance);
  
  printf("Enter average marks: ");
  scanf("%f", &marks);
  	
   //display exam eligibility
   if(attendance >=75 && marks >=40) {
   	    printf("Eligible for exams.\n");
   } else {
   	  printf("Not eligible.\n");
   }
   
     return 0;
}
