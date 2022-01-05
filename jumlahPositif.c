#include <stdio.h>
#include <stdlib.h>
int main(void){
 	int i, total=0, number=0;
 	printf("masukkan number: ");
 	scanf("%d",&number);
 	for (i=0;i<=number;i+=1) {
 		if(number < 0) {
 			break;
 		}		
 			total += i;
 			printf("%d",total);
 	}
	printf("Penjumlahan bilangan positif = %d\n", total);
 	return EXIT_SUCCESS;
}
