#include <stdio.h>
 
int main(void)
{
char foo[8] = {'b','e','l','a','j','a','r','\0'};
printf("Isi variabel foo[0] adalah %c \n", foo[0]);
printf("Isi variabel foo[5] adalah %c \n", foo[5]);
printf("Isi variabel foo[7] adalah %c \n", foo[6]);
printf("Isi variabel foo[8] adalah %c \n", foo[7]);
/*Khusus untuk foo[8] tidak ada karakter yang tampil
 karena ‘\0’ atau karakter null yang secara prinsip berarti
  “kosong” atau “tidak ada”.*/
 char yoo[11] = "Duniailkom";
 
  printf("Selamat datang di %s \n", yoo);
  /*Jika ditulis seperti ini, kita tidak perlu menambah karakter null 
  atau ‘\0’ di akhir string. String “Duniailkom” terdiri dari 10 
  karakter, tapi saya tetap harus membuat variabel yoo[11] karena 
  karakter null akan ditambahkan secara otomatis sebagai karakter ke-11.*/
 //jumlah element array pun sebenarnya boleh tidak ditulis:

  char too[] = "Belajar C di Duniailkom";
 
  printf("Selamat datang di %s \n", too);
  printf("Panjang string adalah %d \n", sizeof(too));
return 0;

}
