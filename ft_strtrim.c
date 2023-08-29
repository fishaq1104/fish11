/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:59:38 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 13:41:40 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_findme(char c, const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	trim;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_findme(s1[i], set))
		i++;
	k = ft_strlen(s1);
	while (k > i && ft_findme(s1[k - 1], set))
		k--;
	str = (char *)malloc(sizeof(char) * (k - i + 1));
	if (str == NULL)
		return (NULL);
	trim = 0;
	while (i < k)
	{
		str[trim++] = s1[i++];
	}
	str[trim] = '\0';
	return (str);
}
// int main()
// {
//     const char *s1 = "hello hello";
//     const char *set = "abc";
//     printf("%s", ft_strtrim(s1,set));
// }