/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:05:16 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 15:05:45 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
//  int main()
// {
//     char *src = NULL;
//     char *dest = NULL;
//     printf("%s",ft_memcpy(dest , src ,sizeof(char)*3));
// }