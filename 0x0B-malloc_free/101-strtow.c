#include "main.h"

char **strtow(char *str);
int countWords(char *str);
char *copyWord(char *str, int start, int end);

/**
 * countWords - count the number of words in
 * strings argunment.
 * @str: the input string to be counted
 * Return: the number of words in input strings
 */
 
int countWords(char *str)
{
        int count = 0;
        int i = 0;

        while (str[i] != '\0')
        {
                while (str[i] == ' ')
                {
                        i++;
                }
                if (str[i] != '\0')
                {
                        count++;
                }
                while (str[i] != ' ' && str[i] != '\0')
                {
                        i++;
                }
        }
        return (count);
}

/**
 *  copyWord - allocate memory to the words and copy it
 *  @str: The input string containing the word
 *  @start: The starting index of the word within the input string
 *  @end: The ending index of the word within the input string
 *  Return: A dynamically allocated string containing the copied word
 */

char *copyWord(char *str, int start, int end)
{
        int length = end - start;
        char *word = (char *)malloc((length + 1) * sizeof(char));
        int i;

        if (word == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < length; i++)
        {
                word[i] = str[start + i];
        }
        word[length] = '\0';
        return (word);
}

/**
 * strtow - Split a string into words
 * @str: The input string to be split
 * Return: A dynamically allocated array of strings (words)
 */

char **strtow(char *str)
{
        char **words;
        int i, wordIndex, wordStart, wordCount, j;

        if (str == NULL || *str == '\0')
        {
                return (NULL);
        }
        wordCount = countWords(str);
        words = (char **)malloc((wordCount + 1) * sizeof(char *));

        if (words == NULL)
        {
                return (NULL);
        }
        i = 0;
        wordIndex = 0;
        wordStart = -1;

        while (str[i] != '\0')
        {
                while (str[i] == ' ')
                {
                        i++;
                }
                if (str[i] != '\0')
                {
                        wordStart = i;
                }
                while (str[i] != ' ' && str[i] != '\0')
                {
                        i++;
                }
                if (wordStart != -1)
                {
                        words[wordIndex] = copyWord(str, wordStart, i);
                        if (words[wordIndex] == NULL)
                        {
                                for (j = 0; j < wordIndex; j++)
                                {
                                        free(words[j]);
                                }
                                free(words);
                                return (NULL);
                        }
                        wordIndex++;
                        wordStart = -1;
                }
        }
        words[wordCount] = NULL;
        return (words);
}
