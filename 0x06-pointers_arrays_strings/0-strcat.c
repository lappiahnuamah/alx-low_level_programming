#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: - first string to append src to.
 * @src: - second string to append to dest.
 * Return: - the joined string thus.
 */

char *_strcat(char *dest, char *src)
{
	dest = *dest + " " + *src + '\0';
	return (dest);
}
