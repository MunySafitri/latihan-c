#include <stdio.h>

int main(){
    int a, b, c, d, e;
    char f;
    printf("--------------------------------------------------------\n");
    printf("             ***Program Menebak Angka***");
    printf("\n--------------------------------------------------------\n");
    printf("\nMari bermain..... Okee... saya sudah menyimpan 6 digit angka... ehe.\n");
    printf("\nSekarang giliran anda dengan meletakkan 5 digit angka bebas dan WAJIB tidak berulang.");
    printf("\nMasukkan 5 digit angka tidak berulang : (A) ");
    scanf("%d", &a);
    printf("\nPrediksi saya adalah total dari jumlah angka yang kita inputkan nanti.\n");
    printf("Angka prediksi saya adalah : 2%d (EHE)\n", a-2);
    printf("\nEhe... belum selesai kok... sekarang giliran anda kembali mengisi 5 angka acak tidak berulang kembali.\n");
    printf("\nMasukkan 5 angka tidak berulang (tidak harus sama dengan kombinasi angka sebelumnya) : (B) ");
    scanf("%d", &b);
    c= 99999-b;
    printf("Angka yang saya masukkan adalah (C) %d \n", c);
    printf("\nMasukkan lagi 5 angka acak tak berulang dalam pikiran anda :  (D) ", &d);
    scanf("%d", &d);
    e=99999-d;
    printf("Emmm... kalau gitu saya kasi angka : (E) %d \n", e);
    printf("\nOke... nampaknya anda mulai bingung, kalau begitu mari kita jumlahkan semua nilai kita");
    printf("\nA+B+C+D+E = %d + %d + %d + %d + %d = ...", a, b, c, d, e);
    printf("\nApakah benar prediksi saya? (EHE)");
    printf("\nApakah anda setuju ? [y] : ");
    scanf("%s", &f);
    printf("\nTotal= %d + %d + %d + %d + %d", a, b, c, d, e);
    printf("\nTotal= %d (EHE)", a+b+c+d+e);
    printf("\n--------------------------------------------------------\n");
    return 1;
}
