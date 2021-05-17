#include<stdio.h>
int main(){
	//membuat array karakter untuk menyimpan password
	char password[30];
	printf("===program login=== \n");
	printf("masukkan password: ");
	scanf("%s", &password);
	
	if (strcmp(password, "kopi") ==0){
		printf("Selamat datang bos! \n");
	}else{
	printf("password salah, coba lagi \n");
	}
	printf("Terimaksih sudah menggunakan aplikasi ini! \n");
}
