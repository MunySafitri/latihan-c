#include <stdio.h>
int main()
{
  char chrString[] = "C Pointers";
  char chrNewStr[20];
  char   *chrPtr;
  char   *chrNewPtr;
  chrPtr = chrString; // Pointer is assigned to point at the beginning of character array chrString
  chrNewPtr = chrNewStr; //Assign pointer chrNewPtr to point to string chrNewStr
  printf("String value pointed by pointer is :");
    while (*chrPtr!= '\0') {
      printf("%c", *chrPtr); // displays the value pointed by pointer one by one
      *chrNewPtr++ = *chrPtr++; // copies character by character to new pointer
    }
  *chrNewPtr = '\0';
  printf("New copied string pointer is :");
    puts(chrNewStr);
  return 0;
}
