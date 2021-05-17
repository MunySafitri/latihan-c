#include<stdio.h>
int main(){
	int panjang,lebar,i,j,huruf=0;
	printf("masukkan panjang: ");
	scanf("%i",&panjang);
	printf("masukkan lebar: ");
	scanf("%i",&lebar);
	for(i=1;i<=panjang;i++){
		for(j=1;j<=lebar;j++){
			
			printf("%c ",huruf+97);
			huruf++;
		}
		printf("\n");
	}
	return 0;
}
