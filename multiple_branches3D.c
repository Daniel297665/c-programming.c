/*
NAME:Daniel Nyakeramba
REG:PA106/G/28788/25
DESCRIPTION:c program to display multiple branches in 3D array
*/

#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int main() {
	//variable declaration
	int i,j,k;
	int chain[3][5][10];
	int totaloccupied =0;
	
   //assigning room occupancy
	printf("multiple branches occupancy\n");
	for(i=0; i<3; i++) {
		int branchoccupied =0;
		for(j=0; j<5; j++) {
			for(k=0; k<10; k++) {
				if(chain[i][j][k]==1)branchoccupied++;
			}
		}
		
		//display and count total occupied rooms
		printf("branch %d -> occupied rooms: %d\n", i + 1,branchoccupied);
		totaloccupied +=branchoccupied;
	}
	//display output
	printf("\ntotal occupied rooms  (allbranches): %d\n",totaloccupied);
	
	return 0;
	 
}