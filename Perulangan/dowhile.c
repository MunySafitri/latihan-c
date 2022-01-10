#include<stdio.h>

int main(){
  int value,rDigit;
  printf("Enter a numbetr to be reversed\n" );
  scanf("%d",&value);//misalkan input 51

  do{
    rDigit = value%10;//lalu rDigit nya adalah 1,5%10=5
    printf("%d",rDigit);
    value=value/10; //maka hasilnya 5.1 maka dibulatkan 5,
  }while(value!=0);//maka akan loop karna 5!=0,
  printf("\n");
  return 0;

}
