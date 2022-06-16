#include<string.h>
/**
* _strncat - it  will use at most n bytes from src
* @dest: where to copy to
* @src: where to copy from
* @n: number of bytes to copy to dest
* Return: returns a new conncatinated string
*/
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}

