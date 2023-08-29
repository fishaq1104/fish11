/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:38:44 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 13:40:53 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void (f)(unsigned int i , char *c) {
//     if (*c >= 'a' && *c <= 'z') {
//         *c -= 32; // Convert lowercase to uppercase
//     }
// }
// void f(unsigned int i ,char *c)
// {
// 		*c = ft_toupper(*c);
// }
// int main()
// {
//     char s[] = "hello world";
//     ft_striteri(s,f);
//     printf("%s\n",s);
// }