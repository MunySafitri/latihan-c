#include <stdio.h>
#include<string.h>
 
struct Siswa {//membuat tipe data struct siswa dengan variabel
  char  nama[50];
  char  sekolah[50];
  unsigned int  uangSaku;
};//ini adalah struct dasar
 
int main(void)
{
  struct Siswa siswa01;
 //variabel siswa01 adalah tipe data bentukan yang terdiri dari 3 element
  strcpy(siswa01.nama, "Andi Permana Nugroho");
  //Karena nama dan sekolah adalah string, maka menggunakan strcpy
  strcpy(siswa01.sekolah, "SMA 1 Lumut Ijo");
  siswa01.uangSaku = 10000;
  //Tanda titik dipakai untuk mengakses sub struktur dari siswa01. 
  //Semua ini sesuai dengan pendefinisian struct Siswa.
 //Sedangkan untuk uangSaku bisa langsung diisi sebagaimana cara pengisian variabel biasa.
  printf("%s bersekolah di %s ", siswa01.nama, siswa01.sekolah);
  printf("dengan uang saku %i per hari\n", siswa01.uangSaku);
 
  return 0;
}
