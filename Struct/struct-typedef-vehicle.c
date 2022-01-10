#include <stdio.h>
#include <string.h>
typedef struct vehicle{
char jenis[30];
int jban;
int jgear;
}kendaraan_darat;

//void set(kendaraan_darat *, char *, int, int); /* prototipe fungsi */

void set(struct vehicle * kd, char * tipe, int b, int g){//atau kendaraan_darat * kd
strcpy(kd->jenis, tipe);
kd->jban = b;
kd->jgear = g;
}

int main(void){
kendaraan_darat v1, v2;
set(&v1, "truk", 6, 7); /* mengirim alamat v1 yang bertipe struck */
set(&v2, "bajai", 3, 4); /* mengirim alamat v3 yang bertipe struck */
printf("Ciri-ciri truk: jlh ban %d, gear: %d\n", v1.jban, v1.jgear);
printf("Ciri-ciri bajai: jlh ban %d, gear: %d\n", v2.jban, v2.jgear);
return 0;
}
