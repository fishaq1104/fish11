/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:09:54 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 15:16:42 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countword(const char *s, char c)
{
	size_t	count;
	size_t	j;

	count = 0;
	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			j = 0;
		}
		else if (!j)
		{
			j = 1;
			count++;
		}
		s++;
	}
	return (count);
}

size_t	countchar(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
	{
		i++;
	}
	return (i);
}

char	*ft_worddup(const char *s, size_t i)
{
	char	*word;
	size_t	k;

	k = 0;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	while (*s && k < i)
	{
		word[k] = *s;
		k++;
		s++;
	}
	word[k] = '\0';
	return (word);
}

void	ft_free_split(char **str)
{
	size_t	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;

	i = countword(s, c);
	str = (char **)malloc((i + 1) * sizeof(char *));
	if (!str || !s)
		return (NULL);
	j = 0;
	while (*s != '\0' && j < i)
	{
		while (*s == c)
			s++;
		str[j] = ft_worddup(s, countchar(s, c));
		if (!str[j])
		{
			ft_free_split(str);
			return (NULL);
		}
		s += countchar(s, c);
		j++;
	}
	str[j] = NULL;
	return (str);
}
// int main() {
//     const char* input_string = "hello!";
//     char delimiter = ' ';

//     char **string = ft_split(input_string, delimiter);
// 	int i = 0;
//     if (string != NULL) {
// 		printf("the split is splitting:\n");
//         while( string[i] != NULL)
// 		{
//             printf("%s\n", string[i]);
//             free(string[i]); // Free memory for each word
// 			i++;
//         }

//         free(string); // Free the array of strings
//     } else {
//         printf("Error:the split is not splitting:\n");
//     }

//     return (0);
// }
