/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:25:36 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 17:06:18 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*n;

	count = 0;
	n = lst;
	while (n != NULL)
	{
		count++;
		n = n->next;
	}
	return (count);
}
// int main()
// {
//     t_list *lst = NULL;
//     lst = ft_lstnew("hi");
//     lst->next = ft_lstnew("hi");
//     lst->next->next = ft_lstnew("ppi");
//     printf("%d",ft_lstsize(lst));
// }