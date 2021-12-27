#include <stdio.h>
int main(){
	int *p;
	int a[15]={1,7,3,4,4,3,2,1,7,8,9,0};
	p=a;
	++*p;
	printf("%d\n",*p);//menaampilkan nilai p yang sudah ditambh satudi index 0
	printf("%d\n",++*p);//menampilkan nilai p ditambah satu lagi di index 0
	p++;// maju ke index 1
	printf("%d\n",*p);//menampilkan nilai p di index 1
	printf("%d\n",++*p);//menambahkan 1 di iindex 1
	return 0;
	
}
