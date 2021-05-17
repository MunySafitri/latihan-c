#include<stdio.h>
int main(){

  void say_hello(char name[]){
    printf("selamat datang %s \n", name);
  }
  void main(){
    say_hello("petanicode");
    say_hello("dian");
  }
}
