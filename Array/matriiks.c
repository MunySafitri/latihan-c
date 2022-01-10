#include<stdio.h>
int main(){
	int bilangan[2][2];
	bilangan [0][0]=100;//membuat array bilangan dengan perintah int bilangan [2][2]
	bilangan [0][1]=101;//artinya, array bilangan adalah sebuah array 2 dimensi dengan 4 element
	bilangan [1][0]=110;
	bilangan [1][1]=111;
	printf("isi array bilangan:c \n");
	printf("%d, %d \n",bilangan [0][0],bilangan[0][1]);
	printf("%d, %d \n", bilangan [1][0], bilangan [1][1]);
	
	int matrix[2][3]= {{1,2,3},{7,8,9}};//perintah ini membuat array 2 dimensi dengan total 6 element(hasil dari 2*3)
	printf("isi array matrix: \n");
	printf("%d %d %d \n ",matrix[0][0],matrix[0][1],matrix[0][2]);
	printf("%d %d %d \n ",matrix[1][0],matrix[1][1],matrix[1][2]);
	//
	return 0;
}
