#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(void)
{
  char nama[20];
  char Nama[20];
  printf("Input nama: ");
  gets(nama);
 
  printf("\n");
  printf("Selamat belajar %s \n", nama);
  
 
  strcpy(nama, "Andika Putra");
  printf("Selamat belajar %s \n", nama);
 
  strcpy(Nama, "Alex Firmansyah");
  printf("Selamat belajar %s \n", Nama);
 
  strcpy(nama, Nama);
  printf("Selamat belajar %s \n", nama);
 
  
  return 0;
}

