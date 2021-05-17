#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
	int jumlah[20];
	float nominal[10]={500.000, 100.000, 50.000, 20.000, 10.000, 5.000, 2.000, 1.000};
	printf("%.3f", nominal[5]);
	int satuan[6]={500,200,100,50,10,5};
	printf("%i",satuan[2]);
	for(i=0;i<8;i++){
		printf("masukkan jumlah uang kertas bernilai %.3f  : ",nominal[i]);
		scanf("%i",&jumlah[i]);
	}printf("%i",jumlah[20]);
	
	/*
	printf("masukkan jumlah uang kertas yang bernilai 500.000: ");
	scanf("%i",&a);
	printf("masukkan jumlah uang kertas yang bernilai 100.000: ");
	scanf("%i",&b);
	printf("masukkan jumlah uang kertas yang bernilai 50.000: ");
	scanf("%i",&c);
	printf("masukkan jumlah uang kertas yang bernilai 20.000: ");
	scanf("%i",&d);  
	printf("masukkan jumlah uang kertas yang bernilai 10.000: ");
	scanf("%i",&e);
	printf("masukkan jumlah uang kertas yang bernilai 5.000: ");
	scanf()*/
	printf("\n----------------------------------\n");
	printf("Pecahan \t\t\t\t Jumlah");
	printf("%7d\n",satuan[1]);
}
