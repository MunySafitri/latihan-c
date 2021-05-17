#include<stdio.h>
int main(){
  int i,j;
  //persegi
  /*for(i=1;i<=10;i++){
    for(j=1;j<=10;j++){
      printf("%d \t",j);
    }
    printf("\n");
  }*/
  //segitiga
  /*for(i=0;i<=10;i++){
    //printf("%d \t",i);
    for(j=1;j<=i;j++){
      printf("%d,%d \t",i,j);
    }printf("\n");

  }*/
  printf("segitiga siku2 kebawah\n");
  for(i=0;i<=5;i++){
    for(j=5;j>=i;j--){
      printf("%d,%d \t",i,j);
    }
    printf("\n");
  }


}
