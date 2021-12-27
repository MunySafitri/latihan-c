#include<stdio.h>

int main(){ //biasa ny int main(void)
	int a, b, c;
	printf("Inputkan nilai a: ");
	scanf("%i", &a);//& artinya memegang nilai untuk di simpan ke varibel

	printf("Inputkan nilai b: ");
	scanf("%i",&b);

	c=a+b;
	printf("Hasil a+b: %i", c);
	//ingat tak ada nilai return pada type void
}
