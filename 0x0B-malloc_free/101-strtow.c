#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * count_words - counts words in a string
 * @str: the string
 * Return: number of words
 */
static int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (isspace(str[i]))
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
	}
	return (count);
}

/**
 * copy_word - copy word from a string to a new string
 * @word: the word
 * @start: start index source string
 * @end: end index of source string
 */
static void copy_word(char *word, char *str, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
		word[i - start] = str[i];

	word[end - start] = '\0';
}

/**
 * strtow - split strong to words
 * @str: the string
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
	int i, num_words, word_index = 0;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);
	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++);
	{
		if (isspace(str[i]))
			continue;
	}

		int start = i;

		while (str[i] != '\0' && !isspace(str[i]))
		{
			i++;
		}

		int end = i;

		word = (char *)malloc(sizeof(char) * (end -start + 1));
		if (word == NULL)
		{
			for (int j = 0; j < word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}

		copy_word(words, str, start, end);
		words[word_index++] = word;
	}

	words[word_index] = NULL;
	return (words);
}
