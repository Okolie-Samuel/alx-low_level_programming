#include "main.h"


/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 * */

char *_strcat(char *dest, char *src)

{
	int ls, ld;

	ld = _strlen(dest);
	ls = _strlen(src) - 1;

	while (ls >= 0)
	{
		*(dest + ld + ls) = *(src + ls);
		ls--;
	}
	*(dest + _strlen(dest)) = '\0';

	return (dest);
}
