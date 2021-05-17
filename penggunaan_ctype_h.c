#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//Library ctype dapat digunakan untuk memanipulasi karakter. Library
//ini sudah build-in pada bahasa pemrograman C.
int main(void)
{
int character;
while((character = getchar()) != EOF){
	if(character == '\n')
	putchar('\n');
	else if(islower(character))
	putchar(character = toupper(character));
	else
	putchar(character);
	}
	exit(EXIT_SUCCESS);
}
