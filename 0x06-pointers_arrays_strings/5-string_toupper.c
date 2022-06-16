#include<string.h>
#include<ctype.h>
/**
* string_toupper - it will change lowercase letters into uppecase
* @s: string
* Return: returns the upper string
*/
char *string_toupper(char *s)
{
int length = strlen(s);
int i;
for (i = 0; i < length; i++)
{
s[i] = toupper(s[i]);
}
return (s);
}

