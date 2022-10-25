#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @src: string to encode
 *
 * Return: address of src
*/

char *rot13(const char *src)
{
	if (src == NULL)
	{
		return (NULL);
	}

	char *result = malloc(strlen(src));

	if (result != NULL)
	{
		strcpy(result, src);
		char *current_char = result;

		while (*current_char != '\0')
		{
			/*increment alphabet characters*/
			if((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90))
			{
				if (*current_char > 109 || (*current_char > 77 && *current_char < 91))
					/*characters that wrap arount the start of the alphabet*/
					*current_char -= 13;
			}
			else
			{
				/*characters that can be safely incremented*/
				current_char += 13;
			}
		}
		current_char++;
	}
	return (result);
}

