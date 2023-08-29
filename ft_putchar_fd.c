/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:34:56 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 14:12:39 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main()
// {
//     char c = 'f';
//     //int fd;
//     //fd = open("nbr.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
//      ft_putchar_fd(c,1);
// }