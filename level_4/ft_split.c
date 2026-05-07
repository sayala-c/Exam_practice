/*Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);

-------------------------------------------------------------------------------*/

#include <stdlib.h>
/*#include <stdio.h>*/

int	count_words(char *str)
{
	int	i;
	int	words;
	
	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\0' && str[i] != '\n') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0' || str[i + 1] == '\n'))
			words++;
		i++;
	}	
	return (words);
}

int	word_len(char *str)
{
	int	len;

	while (str[len] != '\0' && str[len] != ' ' && str[len] != '\t' && str[len] != '\n')
	{
		len++;
	}
	return (len);
}

char *get_word(char *str)
{
	int	i;
	char	*word;
	
	i = 0;
	word = malloc((word_len + 1) * sizeof(char))
	if (!word)
		return (0);
	while ()
	{
		
	}
		
}

char	fill_array(char **array, char *str)
{
	int	i;
	int total_words;

	total_words = count_words(str);	
	i = 0;
	while (array && i <= count_words)
	{
		array[i] = get_word(str);
		i++;
	}
	return (array);
}

char	**ft_split(char *str)
{
	char **array;
	int	total_words;

	total_words = count_words(str);
	array = malloc((count_words + 1) * sizeof(char));
	if (!array)
		return (0);
	array = fill_array(array, str);
	return (array);
	
}

/*int   main(int argc, char **argv)
{
    int count;

    count = count_words(argv[1]);
    if (argc > 1)
        printf("words: %d", count);
    return (0);
}*/

