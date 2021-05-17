/*#include <stdio.h>
#include <stdlib.h>
#define MAXLOOP 10
int main(void)
{
int counter = 1, total = 0;
while(counter <= MAXLOOP)
{
total += counter;
counter++;
}
printf("Total = %d\n ", total);
exit(EXIT_SUCCESS);
}*/
#include <stdio.h>
#include <stdlib.h>
#define MAXLOOP 10
int main(void)
{
	int counter = 1; 
	int total = 0;
	while(counter <= MAXLOOP){
	total = total + counter;
		counter = counter + 1;
} 
}
	printf("Total = %d \n ", total);
	exit(EXIT_SUCCESS);
}
