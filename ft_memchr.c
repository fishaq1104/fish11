/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:44:20 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 16:22:17 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*char_str;

	char_str = (char *)str;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)char_str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
//     char str[] = "hello world" ;
//     printf("%s", ft_memchr(str, 'd', sizeof(str)));
// }