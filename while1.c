#include<stdio.h>
int main(){
  int x=10, numberFound=5;
  int i=0, j=1;
  //using while loop stastement
  while(i<x){
    i++;
    printf("%d\n",i);
  }
  //when number 5 found, escape loop body
  while(j<x){
    if(j==numberFound){
      printf("number found\n");
      break;
    }
    printf("%d....keep finding \n",j);
    j++;
  }
  return 0;
}
