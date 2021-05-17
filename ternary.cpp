#include<stdio.h>
int main(){
	int a= 4;
	printf("a > 1 adalah %s \n", a>1? "benar": "salah");
	a++;
	printf("a++ = %d\n", a);
	++a;
	printf("++a = %d\n ", a);
	a--;
	printf("a-- = %d \n ", a);
	--a;
	printf("--a = %d \n",a);
}
