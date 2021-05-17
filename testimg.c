#include<stdio.h>
#include<stdlib.h>
int main(void) {
char str[256];
int i;
printf("Ketikkan kalimat <maks.256 karakter>:"); gets(str);
for (i=0; i<sizeof(str)/sizeof(char); i++){
	if (str[i]!='\0'){
		if (str[i]==' ')
			++blank_cnt;
		else if (str[i]>='0' && str[i]<='9')
			++digit_cnt;
		else if ((str[i]>='a' && str[i]<='z') ||
				(str[i]>='A' && str[i]<='Z'))
			++letter_cnt;
		else
			++other_cnt;
	}else
		break;
}
return EXIT_SUCCESS;
}
