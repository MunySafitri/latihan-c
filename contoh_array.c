#include<stdio.h>
int main(){
	char huruf[5]={'a','b','c','d','e'};
	printf("Huruf: %c\n", huruf[2]);
	
	//mengisi ulang data pada array
	huruf[2]='z';
	//mencetak isi array
	printf("Huruf: %c \n", huruf[2]);
}
