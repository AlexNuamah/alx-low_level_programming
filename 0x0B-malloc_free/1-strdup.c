#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * containing a copy of the string.
 * @str: The string to be duplicated.
 * Return: A pointer to the duplicated string, or NULL on failure.
 */

char *_strdup(char *str)
{
char *dup;

if (str == NULL)
return (NULL);
dup = (char *)malloc(strlen(str) + 1);
if (dup == NULL)
return (NULL);
strcpy(dup, str);
return (dup);
}
