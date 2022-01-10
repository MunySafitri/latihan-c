#include <stdio.h>

void tampilkan(char *);//dengan prototype

int main(){
	char a[40] ="ini percobaan";
	
	tampilkan(a);
}

void tampilkan(char *desi){
	printf("========%s========",desi);
}
