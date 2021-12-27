#include<stdio.h>

int main(){
	int a, b, c;
	printf("Inputkan nilai a: ");
	scanf("%i", &a);

	printf("Inputkan nilai b: ");
	scanf("%i",&b);

	c=a+b;
	printf("Hasil a+b: %i", &c);
	//ingat tak ada nilai return pada type void
}
