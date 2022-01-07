// int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

// /* ukuran array dalam byte */
// int size = sizeof(array);

// /* banyaknya isi array `array` */
// int length = sizeof(array) / sizeof(*array); 

#include <stdio.h>
int main()
{
	int i, j;
	char* a[2][3] ={{"aku","dia","anda"},{"kamu","mereka","kami"}};
  	
//	int b =sizeof(*a);
//	printf("%i",b);
	
	for(i = 0; i<sizeof(a)/sizeof(*a); i++){//a =24 , *a =12
		for(j = 0; j<sizeof(a[i])/sizeof(*a[i]);j++){
			printf("%s\n",a[i][j]);
		}
	}
	printf("Keluar dari Program");
	return 0;
}
