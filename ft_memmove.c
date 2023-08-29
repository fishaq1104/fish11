/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:46:05 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 15:05:55 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;
	char		*dest_end;
	const char	*src_end;
	size_t		i;

	char_dest = (char *)dest;
	char_src = (char *)src;
	if (char_dest == char_src)
		return (dest);
	if (char_dest < char_src)
		ft_memcpy(char_dest, char_src, n);
	else
	{
		dest_end = char_dest + n;
		src_end = char_src + n;
		i = 0;
		while (i++ < n)
		{
			dest_end--;
			src_end--;
			*dest_end = *src_end;
		}
	}
	return (dest);
}
// int main()
// {
//     char src []  = "good";
//     char dest[] = "morning";
//     printf("%s",ft_memmove(dest,src,(sizeof(char)*4)));
// }