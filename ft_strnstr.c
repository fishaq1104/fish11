/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:55:55 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 17:40:54 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *dst, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	j = 0;
	if (dst[0] == '\0')
		return ((char *)src);
	if (src == NULL && n == 0)
		return (NULL);
	while (src[i] != '\0' && (i < (n)))
	{
		a = i;
		j = 0;
		while (src[i] == dst[j] && dst[j] && i < (n))
		{
			j++;
			i++;
			if (dst[j] == '\0')
				return ((char *)src + a);
		}
		i = a + 1;
	}
	return (NULL);
}
// int main()
// {
//     // char *src = "hello World" ;
//     // char *dst = "h";
//     printf("%s", ft_strnstr("abcdef", "abc", 3));
// }