#include<stdio.h>
int main(){
int *p;
	int a[8]={1,7,3,2,4,5,9,8};
	p=&a[4];
	printf("%d \n",*(p++));//menampilkan nilai 4 seblum pindah ke indeks 5
	printf("%d \n",*p);//menampilkan nilai 5
	--(*p);//mengurangi 1 opada nilai 5
	printf("%d \n",a[5]);//menampilkan array 5 yaitu 4 setelah dikurangi
	*p++;//bergeserv ke posisi 9
	printf("%d \n",(*p));//menampilkan 9
	(*p)--;//mengurangi 1 pada nilai 9 ==8
	printf("%d \n",++(*p));//menambah 1 pada nilai 8==9
	printf("%d",(*++p));//geser posisi ke 8
	
}



