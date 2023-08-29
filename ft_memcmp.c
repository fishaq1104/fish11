/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:45:04 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 16:22:13 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				a;
	const unsigned char	*c1;
	const unsigned char	*c2;

	c1 = s1;
	c2 = s2;
	a = 0;
	while (a < n)
	{
		if (c1[a] == c2[a] && (a < n))
			a++;
		else
			return (c1[a] - c2[a]);
	}
	return (0);
}
// int main()
// {
//     char s1 [] = "hello";
//     char s2 [] = "hello";
//     printf("%d",ft_memcmp(s1,s2,sizeof(char)*2));
// }