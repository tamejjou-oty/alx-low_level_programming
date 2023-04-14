#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to add
 *
 * Return: pointer to new string containg s1 and n bytes of s2
 * or NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n0)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (n <= s2_len) 
	{
		n = s2_len;
	}

	char *result = malloc((s1_len + 1) * sizeof(char));

	if (result == NULL) 
	{
		return NULL;
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';

	return result;
}
