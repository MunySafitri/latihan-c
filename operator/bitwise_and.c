#include<stdio.h>
int main(){
	int a= 2;//binernya 0110
	int b= 3;//binernya 0011
	//bitwise and
	printf("a&b= %d\n", a&b);
	//bitwise or
	printf("a|b= %d\n", a|b);
	//bitwise XOR
	printf("a^b = %d\n", a^b);
	//bitwise not
	printf("~a = %d\n", ~a); //biner 2 = 0010 maka ~2 = 1101=-3
	//bitwise left shift(<<)
	printf("a<<1 = %d\n", a<<1);//artinya geser satu bit ke kiri
	//bitwise right shift
	printf("a>>1 = %d\n", a>>1);

}
