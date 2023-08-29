/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:00:01 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 16:06:49 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char	*part(char *str, long int n)
{
	int	result;

	result = count(n);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	result--;
	while (n > 0)
	{
		str[result] = (n % 10) + '0';
		result--;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	nb;

	i = count(n);
	nb = n;
	str = ((char *)malloc(sizeof(char) * (i + 1)));
	if (str == NULL)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	str = part(str, n);
	str[i] = '\0';
	return (str);
}
// int main()
// {
//     printf("%s" , ft_itoa(-2147483648));
// }