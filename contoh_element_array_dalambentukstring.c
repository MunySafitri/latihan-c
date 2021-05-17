#include <stdio.h>
 
int main(void)
{
  char nama[20] = "Andika Putra";
  printf("Selamat belajar %s \n", nama);
 
  nama[3] = 'u';
  printf("Selamat belajar %s \n", nama);
 
  return 0;
}
