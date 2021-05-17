#include<stdio.h>
int main(){
	char ulangi='y';
	int counter=1;
	
	while(ulangi=='y'){
		//perulangan while
		printf("Apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf(" %c", &ulangi);
		
		counter++;
	}
	printf("\n\n----------\n");
	printf("perulangan selesai! \n");
	printf("kamu mengulang sebanyak %i kali.\n",counter);
}
