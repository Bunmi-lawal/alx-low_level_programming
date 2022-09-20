#include <stdio.h>
/**
 *_strcpy - copy a string to a buffer
 *@dest: buffer
 *@src: Points to string
 *Return: pointer to @des
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
dest[i] = '\0';
return (dest);
}
