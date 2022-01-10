#include <stdio.h>

#include<stdlib.h>

 

int main()

{

char str[20];

int i;

 

for (i=0; i<2; i++)

{

scanf("%[^\n]s", str);

printf("%s\n", str);



// fflush(stdin);

}
/*Fungsinya adalah untuk membersihkan (atau flush) output buffer 
dan memindahkan data buffer menuju console (dalam kasus stdout) 
atau disk (pada kasus file output stream). 
Berikut adalah contoh dari penggunaan sintak fflush.*/
 

return 0;

}
