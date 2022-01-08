#include<stdio.h>
#include<stdlib.h>

typedef struct buku {
  char judul[20];
  char nama_pengarang[20];
  int jumlah_halaman;
  char penerbit[20];
  int tahun_terbit;
} pustaka;

void set(pustaka *koleksi_buku, int jumlah) {
  for (int i = 0; i < jumlah; i++) {
    printf("Buku ke-%d\n", (i+1));

    // Masukkan judul
    printf("Masukkan judul buku: ");
    fgets(koleksi_buku[i].judul, sizeof(koleksi_buku[i].judul), stdin);

    // Masukkan nama pengarang
    printf("Masukkan nama pengarang: ");
    fgets(koleksi_buku[i].nama_pengarang, sizeof(koleksi_buku[i].nama_pengarang), stdin);

    // Masukkan penerbit
    printf("Masukkan penerbit: ");
    fgets(koleksi_buku[i].penerbit, sizeof(koleksi_buku[i].penerbit), stdin);

    // Masukkan jumlah halaman
    printf("Masukkan jumlah halaman: ");
    scanf("%d", &koleksi_buku[i].jumlah_halaman);

    // Masukkan tahun terbit
    printf("Masukkan tahun terbit: ");
    scanf("%d%*c", &koleksi_buku[i].tahun_terbit);
  }
}

void show(pustaka *koleksi_buku, int jumlah) {
  for (int i = 0; i < jumlah; i++) {
    printf("Buku ke-%d\n", (i+1));
    printf("Judul buku: %s", koleksi_buku[i].judul);
    printf("Nama pengarang: %s", koleksi_buku[i].nama_pengarang);
    printf("Penerbit: %s", koleksi_buku[i].penerbit);
    printf("Jumlah halaman: %d\n", koleksi_buku[i].jumlah_halaman);
    printf("Tahun terbit: %d\n", koleksi_buku[i].tahun_terbit);
  }
}

int main() {
  pustaka koleksi_buku[5];
  int jumlah;

  printf("Masukkan jumlah buku: ");
  scanf("%d%*c", &jumlah);

  set(koleksi_buku, jumlah);
  show(koleksi_buku, jumlah);

  return 0;
}
