#include<stdio.h>
int main(){
	int tahun;
	int tanggal;
	int bulan;
	int i;
	const char *urutan[12];
	urutan[0]="Januari'";
	urutan[1]="februari";
	urutan[2]="maret";
	
	
	printf("masukkan tahun: ");
	scanf("%i",&tahun);
	printf("masukkan bulan: ");
	scanf("%i",&bulan);
	
	if (tahun00==0){
		printf("tahun %i adalah TAHUN KABISAT \n",tahun);	
	} else if (tahun %400 !=0){
		printf("tahun %i adalah bukan TAHUN KABISAT",tahun);
	}else if((tahun %400!=0 && tahun%100!=0) && tahun%4==0){
		printf("tahun %i adalah TAHUN KABISAT",tahun);
	}else{
		printf("tahun %i adalah bukan TAHUN KABISAT,tahun");
	}
	
	/*if(bulan==2 && tahun%4==0){
		tanggal[1]=29;
	}else if(bulan ==2 && tahun %4!=0){
		tanggal[1]=28;
	}*/
	
	
	printf("jumlah hari pada bulan %s tahun %i adalah %i",urutan[bulan+1],tahun,tanggal);	
	return 0;	
		
	}


