#include<stdio.h>
int main(){
	int i;
	for(i=0;i<=10;i++){
		if(i<=5){
			printf("perulangan ke- %d \n",i);
			if(i==3){
				printf("---> nilai i adalah %d\n",i);
				
			}
			
		}
		if(i>=6){
			printf("nilai i adalah %d\n",i);
		}
	}
	return 0;
}
