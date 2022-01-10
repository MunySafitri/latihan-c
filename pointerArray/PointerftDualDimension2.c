#include <stdio.h>
int main()
{
char t[3][3] = {
{'1','5','0'},
{'9','5','6'},
{'7','8','9'}
};
char *a =&t[0][0];

//printf("value of t[0][0] : %c\n", t[0][0]);
//printf("value of t[0] : %c\n", ++*t[0]);
//printf("value of t : %c\n", (**t)++);
//printf("value of t : %c\n", (**t)++);
printf("value of t : %c\n", (*a)++);//output 1
printf("value of t : %c\n", (*a++));//output 2
printf("value of t : %c\n", (*a++));//output 5
printf("value of t : %c\n", (*a));//output 0


return 0;
}
