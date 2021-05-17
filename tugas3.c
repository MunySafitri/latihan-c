#include<stdio.h>
int main(){
	int i,j,k,l,m,n,o,p,q,r,s,t;
	int jumlah=0,jumlah1=0,jumlah2=0,jumlah3=0,jumlah4=0,jumlah5=0,jumlah6=0,jumlah7=0,jumlah8=0,jumlah9=0,jumlah10=0;
	int hasil=0,hasil1=0,hasil2=0,hasil3=0,hasil4=0,hasil5=0,hasil6=0,hasil7=0,hasil8=0,hasil9=0,hasil10=0;
	int sisa=0,sisa1=0,sisa2=0,sisa3=0,sisa4=0,sisa5=0,sisa6=0,sisa7=0,sisa8=0,sisa9=0,sisa10=0;
	int input;
	tot_jumlah[14];
	
	printf("Masukkan jumlah uang: ");
	scanf("%i",&input);
	//pada saat 500000
	for(i=input;i<=input;i+=500000){
		hasil+=i;
		sisa=input-500000;
		jumlah=jumlah+1;
		//printf("jumlah uang %i\n",hasil);
		if(sisa==0){
		break;
		}
	}
	
	//printf("%i",jumlah);
	
	//jumlah-=1;
	/*printf("%i \n",sisa);
	printf("%i \n",jumlah);*/
	//pada saat 100k
	for(j=sisa;j<=sisa;j+=100000){
		hasil1+=j;
		sisa1=sisa-100000;
		jumlah1++;
		tot_jumlah[0]=jumlah1;
		//printf("sisa uang %i \n",sisa1);
		if(sisa1==0){
			break;
		}
			
	}
	//jumlah1-=1;
	/*printf("%i \n",sisa1);
	printf("%i\n",jumlah1);*/
	//pada saat 50k
	for(k=sisa1;k<=sisa1;k+=50000){
		hasil2+=k;
		sisa2=sisa1-50000;
		jumlah2++;
		tot_jumlah[1]=jumlah2;
		if(sisa2==0){
			break;
		}
	
	}//printf("%i",sisa2);
	//jumlah2-=1;
	//pada saat 20k
	for(j=sisa2;j<=sisa2;j+=20000){
		hasil3+=j;
		sisa3=sisa2-20000;
		jumlah3++;
		tot_jumlah[2]=jumlah3;
		if(sisa3==0){
			break;
		}
		
	}
	
	//jumlah3-=1;
	for(k=sisa3;k<=sisa3;k+=10000){
		hasil4+=k;
		sisa4=sisa3-10000;
		jumlah4++;
		tot_jumlah[3]=jumlah4;
		if(sisa4==0){
			break;
		}
	}
	for(l=sisa4;l<=sisa4;l+=5000){
		hasil5+=k;
		sisa5=sisa4-5000;
		jumlah5++;
		tot_jumlah[4]=jumlah5;
		if(sisa5==0){
			break;
		}
	}
	for(m=sisa5;m<=sisa5;m+=2000){
		hasil6+=m;
		sisa6=sisa5-2000;
		jumlah6++;
		tot_jumlah[5]=jumlah6;
		if(sisa6==0){
			break;
		}
		
	}
	//printf("hasil6 %i dan sisa6 %i",hasil6,sisa6);
	for(n=sisa6;n<=sisa6;n+=1000){
		hasil7+=n;
		sisa7=sisa6-1000;
		jumlah7++;
		tot_jumlah6=jumlah7;
		if(sisa==0){
			break;
		}
	}
	//jumlah4-=1;
	//printf("%i \n",hasil7);
	//printf("%i",sisa7);
	for(o=sisa7;o<=sisa7;s+=500){
		hasil8+=o;
		sisa8=sisa7-500;
		jumlah8++;
		tot_jumlah[7]=jumlah8;
		if(sisa==0){
		break;
		}
		
	}
	
	return 0;
}
