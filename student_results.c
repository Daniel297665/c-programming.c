/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:C program to display student examination results
*/
#include<stdio.h> //printf()
#include<stdlib.h> 

struct student{
	//variable declaration
	char name[20];
	int reg_no;
	float total_marks;
};

int main() {
	FILE *file;
	struct student s;
	//file open
	file=fopen("results.dat", "rb");
	//display output
	printf("name\t\tmarks\n");
	printf("------\n");
	
	while(fread(&s, sizeof(struct student),1,file)) {
		printf("%-15s %.2f\n", s.name, s.total_marks);
	}
	//file close
	fclose(file);
	//display output
	printf("all student records displayed successfully.\n");
	return 0;
}