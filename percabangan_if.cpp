#include<stdio.h>
int main(){
	char password[30];
	int total_belanja = 0;	
	int nilai;
	char grade;
	//printf("");
	printf("masukkan password: ");
	scanf("%s", &password);
	
	if (strcmp(password, "kopi") ==0){
		printf("Selamat datang bos! \n");
	}else{
	printf("password salah, coba lagi \n");
	}
	printf("Terimaksih sudah menggunakan aplikasi ini! \n");


//switchcase
	printf("==program pembayaran ==\n");
	printf("inputkan total belanja: ");
	scanf("%i", &total_belanja);
	//menggunakan blok percabangan if
	if(total_belanja>10000){
		printf("Selamat, anda mendapatkan hadiah! \n");
	}
	printf("terimakasih sudah berbelanja  di toko kami \n\n");

	
	printf("===Program Grade Nilai \n");
	printf("Inputkan nilai: \n");
	scanf("%i", &nilai );
	
	if (nilai>=90){
		grade= 'A';
	}else if(nilai>=80){
		grade= 'B';\
	}else if (nilai>=70){
		grade = 'B';
	}else if(nilai>=60){
		grade ='C';
	}else if (nilai>=50){
		grade= 'C';
	}else if (nilai>=40){ 
		grade = 'D';
	}else{
		grade= 'F';
	}
	printf("Predikat anda adalah %c", grade);
}
	
}
