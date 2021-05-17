#include<stdio.h>
int main(){
	int n;
	int k;
	int j;
	printf("masukkan nilai i: ");
	scanf("%i",&n);
	
	for(int i=1; i<=n; i++){
		for(int k=n;k>=i;k--){
			printf("*");
		}
		
		printf(" \n");
	}
	printf("segitiga kedua \n");
	for(int i=1; i<=n;i++){
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf(" \n");
	}
	printf("segitiga ketiga \n");
	for(int i=1; i<=n;i++){
		
		for(int k=1;k<i;k++){
			printf(" ");
		}
		printf(" ");
		for(int j=n;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
