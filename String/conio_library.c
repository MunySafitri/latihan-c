 #include <stdio.h>
#include <windows.h>
 #include <conio.h>
 int main(){
        char nama [20];
        clrscr();
        printf("Siapakah Penemu Bahasa C : ");
        gets(nama);
        printf("Penemu Bahasa C adalah : %s", nama);
         
        char karakter;
        system("cls");//clrscr();//clear screan
        printf("Masukkan Sebuah Karakter : ");
        karakter=getchar();
        printf("Karkternya adalah : %c", karakter);
         
        // fungsi getch() tidak akan menampilkan karakter yang telah diketik
        char password;
        system("cls");
        printf("Masukkan Password anda : ");
        password=getch();
   
         //Fungsi ini meminta inputan satu buah karakter dari keyboard tanpa diakhiri dengan tombol enter dan karakter yang telah diketik oleh user akan ditampilkan di layar.
          printf("Masukkan Password anda : ");
          password = getche();
          printf("Password anda adalah : %s", Password);
   
   
        return 0;
        }
