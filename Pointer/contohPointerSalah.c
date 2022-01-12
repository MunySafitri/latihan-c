#include <stdio.h>
#include<string.h>
#include<ctype.h>

char *trim(char *s)
{
    while(isspace(*s))
        s++;
    char *end = s + strlen(s) - 1;
    while(end>=s && isspace(*end))
    {
        end--;
    }
    *(end + 1) = '\0'; //Line causing segmentation fault
    return s;

}

int main()
{
    char *e = NULL;
    e = trim("hello  ");// ga bisa karna pointer ga bisa write , dia hanya read only
    printf("%s", e);
    printf("hi");
    return 0;
}
