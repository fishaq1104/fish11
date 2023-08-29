/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:53:23 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 13:41:03 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (n == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (n <= dst_len)
		return (n + src_len);
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && (j < (n - dst_len - 1)))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
//     char dst[] = "0";
//     char src[] = "HI";
//     printf("%zu\n" , ft_strlcat(dst,src,sizeof(dst)));
//     printf("%s\n",dst);
// }
