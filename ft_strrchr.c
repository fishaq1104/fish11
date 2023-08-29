/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:56:14 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 13:41:26 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	a;

	a = 0;
	{
		while (str[a] != '\0')
		{
			a++;
		}
		while (a > 0)
		{
			if (str[a] == (char)c)
				return ((char *)&str[a]);
			a--;
		}
		if (str[a] == (char)c)
			return ((char *)&str[a]);
	}
	return (NULL);
}
// int main()
// {
//     char *str = "hello world" ;
//     printf("%s",ft_strrchr(str,'p'));
// }
