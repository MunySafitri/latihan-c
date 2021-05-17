#include<stdio.h>
int main(){
	int tahun;
	int bulan;
	printf("masukkan tahun: ");
	scanf("%i \n",&tahun);
	printf("masukkan bulan: ");
	scanf("%i \n",&bulan);
	
	if (tahun%400==0){
		printf("tahun %i adalah TAHUN KABISAT ",tahun);	
	} else if (tahun %400 !=0){
		printf("tahun %i adalah bukan TAHUN KABISAT",tahun);
	}else if((tahun %400!=0 && tahun%100!=0) && tahun%4==0){
		printf("tahun %i adalah TAHUN KABISAT",tahun);
		
	return 0;	
		
	}
}

