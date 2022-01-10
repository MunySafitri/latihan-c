#include<stdio.h>
int main(){
	int i,j;
	int panjang,lebar;
	printf("masukkan nilai panjang pada persegi panjang: ");
	scanf("%i",&panjang);
	printf("masukkan nilai lebar pada persegi panjang: ");
	scanf("%i",&lebar);
	
	for ( i=1; i<=panjang;i++){
		for(j=1; j<=lebar;j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
