//string tidak lai array dari char maka cara pembuatan tipe data string dalam bahasa C juga sama seperti cara pembuatan array.
#include<stdio.h>
int main(void)
{
//char foo[8] = {'b','e','l','a','j','a','r','\0'};
//printf("Isi variabel foo adalah %s \n", foo);
/*kenapa ada tambahan ‘\0’ di bagian akhir?

Ini adalah salah satu syarat pembuatan string di dalam bahasa C. 
Semua string harus memiliki karakter “khusus” untuk menandakan akhir
 dari string. Tanda ‘\0’ mewakili karakter null yang dipakai oleh 
 compiler bahasa C sebagai tanda akhir sebuah string.*/
 char foo[5] = {'b','e','l','a','j','a','r','\0'};
printf("Isi variabel foo adalah %s \n", foo);
 
  return 0;
}
