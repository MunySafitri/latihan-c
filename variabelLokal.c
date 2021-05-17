#include<stdio.h>
void kali_dua(int *num){
  *num= *num *2;

}
void main(){
  int angka =9;
  kali_dua(&angka); //ingat untuk memberi nilai parameter menggunakan &

  printf("isi nilai variable angka = %d\n",angka);
}
