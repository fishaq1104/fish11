/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:30:39 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 14:11:53 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (*s)
	{
		ft_putstr_fd(s, fd);
	}
	ft_putchar_fd('\n', fd);
}
// int main()
// {
//     char *s = "Hello";
//     //int fd;
//     //fd = open("nbr.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
//     ft_putendl_fd(s,1);
// }