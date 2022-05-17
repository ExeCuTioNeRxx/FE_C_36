#include<stdio.h>
#include<string.h>
int main()
{ 
    char strname [40];
    printf ("enter the string\n");
    scanf("%[^\n]s" , strname);
    printf ("the string is %s\n", strname);
    return 0;
}
Output:
/*
enter the string
enter the string
the string is enter the string
*/