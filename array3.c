#include <stdio.h>
 
int main(void)
{
  float pecahan[] = {3.14,-99.01,0.002};
 
  printf("Isi array pecahan: ");
  printf("%.3f, %.3f, %.3f \n",pecahan[0],pecahan[1],pecahan[2]);
  printf(" \n");
 
  pecahan[1] = 9.123;
  pecahan[2] = 12.9925;
 
  printf("Isi array pecahan: ");
  printf("%.3f, %.3f, %.3f \n",pecahan[0],pecahan[1],pecahan[2]);
 
  return 0;
}
