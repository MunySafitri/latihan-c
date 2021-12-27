 #include <stdio.h>
 #include <conio.h>

    int main(){
      char password[10];
     
      printf("Masukkan Password anda : ");
      
      int i =0;
    	while(1){
    		password[i]=getch();
    		if(password[i]==13){
    			printf("masuks");
    			break;
			}
    		i++;
    		
		}
		printf("%s",password);
      return 0;
    }
