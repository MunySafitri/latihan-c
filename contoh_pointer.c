#include<stdio.h>
void main(){
  int umur =19;
  float tinggi = 175.60;
  char huruf[10]={'a','b','c','d'};

  //membuat pointer
  int *pointer_umur =&umur;
  int *pointer2 =&umur;
  float *p_tinggi = &tinggi;
  char *p_huruf= &huruf[0];//dalam tipe chhar per karakter
  
  printf("nilai dari huruf = %c\n", *p_huruf);
  printf("alamat memori variabel 'huruf' = %d\n", &huruf[0]);
  printf("alamat memori variabel 'huruf' = %d\n", &huruf[1]);//alamat akan bertambah 1 , sesuai ukuran type data
  
  
  printf("alamat memori variabel 'umur' = %d\n", &umur);//-->alamat umur akan sama dengan pointer umur
  printf("alamat memori variabel 'tinggi' = %d\n", &tinggi);
    // mencetak referensi alamat memori pointer
  printf("referensi alamat memori *pointer_umur = %d\n", pointer_umur);
  printf("referensi alamat memori *pointer2 = %d\n", pointer2);
  printf("referensi alamat memori *p_tinggi = %d\n", p_tinggi);
  
  printf("nilai dari *pointer_umur = %d\n", *pointer_umur);
  printf("nilai dari *pointer2 = %d\n", *pointer2);
  printf("nilai dari *p_tinggi = %f\n", *p_tinggi);
  
  umur=10;
  
  printf("nilai dari *pointer_umur = %d\n", *pointer_umur++);
  printf("referensi alamat memori *pointer_umur = %d\n", pointer_umur);
  printf("nilai dari *pointer_umur = %d\n", ++*pointer_umur);
  printf("referensi alamat memori *pointer_umur = %d\n", pointer_umur);
  
  printf("nilai *p_tinggi = %f\n", (*p_tinggi)++);
  printf("nilai *p_tinggi = %f\n", (*p_tinggi));// akan merubah nilai dari alamat yang dirujuk oleh pointer tersebut
  printf("nilai tinggi = %f\n", tinggi);
  
  /*Apa bedanya alamat memori pointer dengan alamat referensi?

Alamat memori pointer adalah alamat memori yang digunakan untuk menyimpan pointer. Sedangkan alamat referensi adalah alamat yang akan menjadi referensi dari pointer.

Ingat:

“Pointer akan bisa mengakses isi data pada alamat referensi yang diberikannya”

Lah! bukannya nanti akan tambah boros memori.

Jika kita bisa menggunakan variabel biasa, ngapain pakai pointer?

Penggunaan pointer sebenarnya opsional, kamu boleh pakai.. boleh juga tidak.*/
}
