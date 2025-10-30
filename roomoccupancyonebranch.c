/*
NAME:Daniel Nyakeramba
REG
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h> 

int main() {
	//variable declaration
	int i,j;
	int occupancy[5][10]; //for 5 floors and 10 rooms each
	int occupied, vacant;
	srand(time(0));
	
	//assigning random occupancy (1=occupied, 0=vacant)
	printf("room occupancy(one branch\n");
	for ( i=0; i <5; i++) {
		for (j=0;j <10; j++) {
			occupancy[i][j ] =rand() %2;
		}
	}
	
	//display and count occupied and vacant room per floor
	for(i =0; i <5; i++) {
		occupied=0;
		vacant=0;
		for(j =0; j <10; j++) {
			if(occupancy[i][j] == 1)occupied++;
			else
				vacant++;
			
		}
		//display output
		printf("floor %d -> occupied: %d, vacant: %d\n", i +1, occupied, vacant);
	}
	return 0;
	
}

