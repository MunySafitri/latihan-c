#include<stdio.h>
int main(){
	int a, b, c ;
	printf("inputkan nilai a: ");
	scanf("%i", &a);
	
	printf("inputkan nilai b: ");
	scanf("%i", &b);
	
	c=a+b;
	printf("hasil a+b: %i \n",c);
	printf("hasil a-b: %i \n", a-b);
	printf("hasil a*b: %i \n", a*b);
	printf("hasil a/b: %f \n", a/b);
	printf("sisa bagi a/b: %i", a%b);// tidak bisa pake tipe float
	return 0;
}
