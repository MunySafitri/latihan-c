#include <stdio.h>
 #include <conio.h>

    int main(){
      char password[10];
     
      printf("Masukkan Password anda : ");
      
      int i =0;
    	while(1){
    		password[i]=getch();
    		if(password[i]==8){
    			//printf("dihapus");
    			i--;
    			password[i]=' ';
			}else if(password[i]==13){
				//printf("enter");
				break;
			}
    		i++;
    		
		}
		printf("\n\nPassword anda: %s",password);
      return 0;
    }
