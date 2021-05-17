#include<stdio.h>
int main(){
	printf("Ukuran int = %d, Ukuran double = %d\n",sizeof(int), sizeof(double));
	
	int x = 5;
	int y = x++;
	printf("%i",y);
	x = 5;
	y = ++x;
	printf("%i",y);
	x = 5;
	y = x + x++;//kalo tidak d=single maka nilai x langsung dihitung dari 0
	printf("%i",y);
	y=10;
	x=6;
	int t=1;
	y += x; 
	y /= (x + 2); 
	printf("\n%i",y);
	y += (x %= 4)-(t *= 5);
	printf("\n%i, %i",x,y);
	y += (x == 2);
	printf("\n%i",y);
}
