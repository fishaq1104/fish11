/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:55:06 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 13:41:20 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t			i;
	unsigned char	*s2_s;
	unsigned char	*s1_s;

	s2_s = (unsigned char *)s2;
	s1_s = (unsigned char *)s1;
	if (n == 0)
		return (0);
	i = 0;
	while (s1_s[i] == s2_s[i] && s1_s[i] != '\0' && i < (n - 1))
	{
		i++;
	}
	return (s1_s[i] - s2_s[i]);
}
// int main()
// {
//     char s1 [] = "h";
//     char s2 [] = "i";
//     printf("%d",ft_strncmp(s1, s2,sizeof(char)*3));
// }
