#include <stdlib.h>
/**
* reverse_array - it will reverse the array
* @a: the array of elements
* @n: the size of an array
*/
void reverse_array(int *a, int n)
{
int i;
if (a == NULL)
return;
for (i = 0; i <= n / 2; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
