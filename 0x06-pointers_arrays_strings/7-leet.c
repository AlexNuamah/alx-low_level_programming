/**
 * leet - replace letters with numbers
 * @str: pointer to an array of words
 *
 * Return: s
 */

char *leet(char *str)
{
	int i, j;

	char alphabet[80] = "aAeEoOtTlL";
	char numbers[80] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = numbers[j / 2];
			}
		}
	}
	return (str);
}
