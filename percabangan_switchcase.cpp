#include<stdio.h>
int main(){
	char grade;
	printf("Inputkan grade: ");
	scanf("%c", &grade);
	
	switch (toupper(grade)){
		case 'A':
			printf("luar biasa! \n");
			break;
		case 'B':
		case 'C':
			printf("bagus! \n");
		case 'D':
			printf("Anda lulus \n");
		case 'E':
		case 'F':
			printf("anda remidi \n");
		default:
			printf("grade salah! \n");
			
	}
}
