#include <stdio.h>

int main(){
	//deklarasi angka dan pointer
	int angka, *p;
	//meminta inputan angka
	printf("Masukkan angka : "); scanf("%d" , &angka); fflush(stdin);
	//mencetak angka
	printf("Angka anda : %d\n", angka); 
	getchar();//untuk menunggu user menekan enter
	//mencetak alamat dari variabel angka
	printf("Alamat angka anda : %d\n", &angka); 
	getchar();
	printf("Assign alamat angka %d ke pointer p\n", angka); 
	getchar();
	//pointer p menunjuk alamat dari si angka
	p=&angka;
	//mencetak isi dari alamat pointer p
	printf("Isi dari pointer p : %d", *p);
	getchar();
        return 0;
}
