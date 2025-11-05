
#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *file;
	char title[20];
	
	file = fopen("borrowed_books.txt", "a");
	

printf("enter book title (type 'exit' to stop:\n");
while(1){
	printf("book title: ");
	fgets(title, sizeof(title), stdin);
	
	if(strncmp(title,"exit", 4)==0)
		break;
	fputs(title,file);
	printf("book title stored successfully!\n");
}
fclose(file);
printf("all records saved in borrowed_books.txt\n");
return 0;
}