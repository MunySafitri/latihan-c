#include<stdio.h>
/*secaRa intrnal ,char sebenarnya bertipe interger, untuk membedakan apakah char ini berisi karakter atau huruf dilakukan pad saat
menampilkannya.jika didalam printf menggunakan code%c, karakter atau huruf dilakua=kan pada saat menampilkannya
jika didalam perintah printf menggunakan kode %d. maka akan manampilkan tipe data interger.*/
int main(){
  char foo=65;
  char bar='Z';

  printf("isi variabel foo(char):%d \n", foo);
  printf("isi variabel foo(char):%c \n", foo);
  printf("isi variabel bar(char):%d \n", bar);
  printf("isi variabel bar(char):%c \n", bar);
  return 0;

  //darimana huruf A?, ini berasal dari kode ascii dimana huruf  BERNILAI desimal 65. dengankata lain, didalam daftar karakter
  //ASCHII Urutan A berada diurutan 65
  //begitupula karkter z berada pada posisi 90 di tabel aschii
}
