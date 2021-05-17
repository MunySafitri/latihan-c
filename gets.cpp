#include<stdio.h>
int main(){
	char name[50], web_address[50];

	printf("Nama: ");
	gets(name);

	printf("Alamat web: ");
	gets(web_address);

	printf("you entered: %s \n", name);
	printf("web address: %s", web_address);

	return 0;
}
