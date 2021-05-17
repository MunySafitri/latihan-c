#include <stdio.h>
 #include <stdlib.h>
 int main(void){
 int num, digit;
 printf("Membalik angka\n");
 printf("Masukkan sebuah nilai > 10: ");scanf("%d", &num);
 do{
 digit = num % 10;
 printf("%d", digit);
 num /= 10;
 }while(num != 0);
 putchar('\n');
 return EXIT_SUCCESS;
 }

