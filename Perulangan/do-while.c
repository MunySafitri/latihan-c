#include<stdio.h>
int main(){
	char ulang = 'y';
	int counter= 0;
	do{
		printf("apakah kamu mau mengulang? \n");
		printf("jawab (y/t): ");
		scanf("%c", &ulang);
		
		counter++;
		
	}while (ulang == 'y');
	printf("\n\n--------------\n");
	printf("perulangan selesai!\n");
	printf("kamu mengulang sebanyak-%i kali",counter);
}
