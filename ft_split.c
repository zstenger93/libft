/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zstenger <zstenger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:28:04 by zstenger          #+#    #+#             */
/*   Updated: 2022/10/30 17:22:57 by zstenger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/*
if no string, return
assume c += ' '  (space)
while not \0
	if str[z] is not c and new_word = 0 then +1 word
	then just counting up until c (sapce) is found and with each new world
	start over.
return thw word_count when the terminating null is reached.
*/
static int	ft_word_count(const char *str, char c)
{
	int	z;
	int	word_count;
	int	new_word;

	if (!str)
		return (0);
	z = 0;
	word_count = 0;
	new_word = 0;
	while (str[z] != '\0')
	{
		if (str[z] != c && new_word == 0)
		{
			word_count++;
			new_word = 1;
		}
		else if (str[z] == c)
			new_word = 0;
		z++;
	}
	return (word_count);
}

/* allocates the memory and copies all the words from start until the
end character by character. +1 for terminatig null */
static char	*ft_word_copy(const char *str, int start, int end)
{
	char	*word;
	int		z;

	z = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[z] = str[start];
		z++;
		start++;
	}
	word[z] = '\0';
	return (word);
}

/* 
splitting the string at every delimeter (space) copy a new word until
the next delimeter
Null pointer should be set at the end.
new word is set to -1 so the new word can start from the index s[0]
in the array
if s[z] is not the start of a word, z++
*/
static void	ft_string_split(char **split, const char *s, char c)
{
	size_t	z;
	size_t	i;
	int		new_word;

	z = 0;
	i = 0;
	new_word = -1;
	while (z <= ft_strlen(s))
	{
		if (s[z] != c && new_word == -1)
			new_word = z;
		else if ((s[z] == c || z == ft_strlen(s)) && new_word >= 0)
		{
			split[i] = ft_word_copy(s, (new_word), z);
			new_word = -1;
			i++;
		}
		z++;
	}
	split[i] = NULL;
}

/* count the words -> allocates the memory with malloc -> copies the words
into an array with terminating null at the end. */
char	**ft_split(char const *s, char c)
{
	char	**word_array;

	if (!s)
		return (NULL);
	word_array = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!word_array)
		return (NULL);
	ft_string_split(word_array, s, c);
	return (word_array);
}


#include "ft_strlen.c"
#include <stdio.h>
int	main(void)
{
	char    months[] = "JAN,FEB,,MAR,APR,MAY,JUN,JUL,,AUG,SEP,OCT,NOV,DEC,,";
	int		index;
	char	delim;
	char	**split;
	printf("\nmonths=[%s]\n\n", months);
	delim = ',';
	split = ft_split(months, delim);
	index = 0;
	while (split[index] != 0)
	{
		printf("%s\n", split[index]);
		free(*(split + index));
		index++;
	}
	printf("\n");
	return (0);
}

