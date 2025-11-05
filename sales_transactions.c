
#include<stdio.h> 
#include<stdlib.h> 

int main() {
	FILE *file;
	float amount, total =0.00 ;
	
	file =fopen("sales.txt", "r");
	
	while(fscanf(file, "%f", &amount)==1) {
		total += amount;
	}
	fclose(file);
	printf("total sales for the day: %.2f\n", total);
	return 0;
}