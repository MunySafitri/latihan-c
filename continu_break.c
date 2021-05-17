#include<stdio.h>

int main() {
int n;
do {
printf("\nEnter the number:");
scanf("%d",&n);
if (n < 0) {
break;
}
if(n>10) {
printf("Skip the value\n");
continue;
}
printf("The number is: %d", n);
} while (n != 0);
}

