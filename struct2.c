#include <stdio.h>
 
struct Siswa {
   char  nama[50];
   char  sekolah[50];
   unsigned int  uangSaku;
};
 
int main(void)
{
  struct Siswa siswa01;
  struct Siswa siswa02;
  struct Siswa siswa03;
 
  strcpy(siswa01.nama, "Andi Permana");
  strcpy(siswa01.sekolah, "SMA 1 Lumut Ijo");
  siswa01.uangSaku = 10000;
 
  printf("%s bersekolah di %s ", siswa01.nama, siswa01.sekolah);
  printf("dengan uang saku %i per hari\n", siswa01.uangSaku);
 
  strcpy(siswa02.nama, "Lisa Permata Sari");
  strcpy(siswa02.sekolah, "SMA 1 Biru Langit");
  siswa02.uangSaku = 30000;
 
  printf("%s bersekolah di %s ", siswa02.nama, siswa02.sekolah);
  printf("dengan uang saku %i per hari\n", siswa02.uangSaku);
 
  strcpy(siswa03.nama, "Jessica Stephany");
  strcpy(siswa03.sekolah, "SMA 1 Merah Jambu");
  siswa03.uangSaku = 75000;
 
  printf("%s bersekolah di %s ", siswa03.nama, siswa03.sekolah);
  printf("dengan uang saku %i per hari\n", siswa03.uangSaku);
 
  return 0;
}
