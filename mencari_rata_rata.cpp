#include<stdio.h>
int main(){
	int tinggi_badan[10]={175, 165, 166, 157, 184, 156, 163, 176, 171, 169};
	//length itu sama dengan n
	int length=sizeof(tinggi_badan)/sizeof(*tinggi_badan);
	printf("size of tinggi badan adalah %d \n",sizeof(tinggi_badan));
	printf("size of *tinggi badan adalah %d \n",sizeof(*tinggi_badan));
	printf("int lenght adalah: %d \n", length);
	int sum=0;
	for(int i=0; i<length;i++){
		sum+= tinggi_badan[i];
	}
//rata-rata tinggi badan
	float rata_rata=(float)sum/(float)length;
	printf("rata-rata tinggi badan: %.2f\n", rata_rata);
}	/* kita menggunakan %.2f untuk mennetukan batas jumlah
angka setelah koma. Angka 2 sebalum f artinya dua angka
dibelakang koma.
Contoh
Tinggi : 178.43
Berat : 65.30
*/
