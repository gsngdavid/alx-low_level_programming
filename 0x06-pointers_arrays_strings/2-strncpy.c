#include<string.h>
/**
* _strncpy - copy a string
* @dest: where to copy to
* @src: where to copy from
* @n: number of bytes to copy to dest
* Return: returns a copy of src to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
