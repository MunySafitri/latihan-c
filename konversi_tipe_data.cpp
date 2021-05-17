#include<stdio.h>

int main(){
	int a=5 ;
	int b= 2;
	
	float c= (float)a/(float)b;
	printf("Hasil a/b = %.2f \n", c);
	return 0;
}
/*mengapa hasilnya 2.00 ? bukan 2.50?
ini disebabkan karena variabel  a dan b bertipe interger. nah hasil pembagian
dari tipe data interger akn selalu dibulatkan agar tidak dibulatkan ,kita harus
mengubahknya menjadi float. kemudian melakukan pembagian*/

