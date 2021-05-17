#include<stdio.h>
int main() {
	float uts, nilai, uas, tugas;
	printf("Tugas: "); scanf("\%f",&tugas);
	printf("UTS: "); scanf("\%f",&uts);
	printf("UAS: "); scanf("\%f",&uas);
	nilai = 0.2 * tugas + 0.3 * uts + 0.5 * uas;
		if (nilai >= 90)
	printf("Nilai A");
	else if (nilai >= 80)
	printf("Nilai B");
	else if (nilai >= 65)
	printf("Nilai C");
	else if (nilai >= 50)
	printf("Nilai D");
	else
	printf("Nilai E");
	return 0;
	}


