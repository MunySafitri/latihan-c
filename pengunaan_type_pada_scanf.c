#include <stdio.h>
#include <stdlib.h>
int main(void){
char c1, c2;
int ibil;
float fbil;
double dbil;
printf("\n%s\n%s\n", "Demo scanf untuk beberapa tipe data","Input dua karakter, sebuah integer, float dan double");
scanf("%c,%c,%d,%f,%lf", &c1, &c2, &ibil,&fbil, &dbil);
printf("\nOutput:\n");
printf("%4c %4c %5d %12.3f %15e\n\n",c1, c2,ibil, fbil,dbil);
exit(EXIT_SUCCESS);
}
