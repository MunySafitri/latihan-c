#include<stdio.h>
int main(){
	char i[5];
	printf("apa ini?");
	gets(i);
	printf("ini adalah nilai i %s \n",i);
	strcpy(i,"apa lah tu \n");
	printf("%s",i);
	strcpy(i,"ini adalah itu");
	strcpy(i,"ya pokoknya itu");
	printf("%s",i);
	return 0;
}
