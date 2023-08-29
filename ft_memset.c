/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:04:20 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 15:05:38 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	char	*char_dest;
	size_t	i;

	char_dest = (char *) dest;
	i = 0;
	while (i < n)
	{
		char_dest[i] = c;
		i++;
	}
	return (dest);
}
// int main()
// {
//     char dest[] = "hello";
//     printf("%s",ft_memset(dest,'a', sizeof(char)*2));
// }