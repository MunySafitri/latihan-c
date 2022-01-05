#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 int main(void) {
       int k ;
       char pw[30]; /* array dimensi 1 bertipe char */
       k=1;
       printf("Masukkan Password : ");
       scanf("%s", pw);
       while (k <= 3){
          if (strcmp(pw,"sandi")==0) break;
          else{
             printf("Password Salah...\n");
             printf("Masukkan Password Kembali: ");
             scanf("%s", pw);
             k++;
          }
       }
       return EXIT_SUCCESS;
 } 
