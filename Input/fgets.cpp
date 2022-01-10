#include<stdio.h>
int main(){
	char name[50], email[50];
	printf("Nama: ");
	fgets(name, sizeof(name), stdin); /*fungsi sizeof() untuk mengambil ukuran buffer dari variabel, 
										ukuran ini hanya menjadi batas max dan min dari inputan*/
	
	printf("Email: ");
	fgets(email, sizeof(email), stdin);
	
	printf("\n-----------------\n");
	printf("Nama anda: %s \n", name);
	printf("Alamat email: %s", email);
	
	return 0;
}
