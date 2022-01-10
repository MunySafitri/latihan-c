#include<stdio.h>
#include<stdlib.h>

int main(){
	char huruf[5]={'a','b','c','d','e'};
	printf("huruf: %c\n",huruf[2]);
	huruf[2]= 'z';
	printf("huruf pada indeks 2 adalah %c \n", huruf[2]);
}
