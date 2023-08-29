/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:45:31 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/04 16:59:16 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// int main()
// {
//     t_list *lst = NULL;
//     lst = ft_lstnew("hi");
//     lst->next = ft_lstnew("hello");
//     lst->next->next = ft_lstnew("nope");
//     t_list *current = ft_lstlast(lst);
//     printf("%s\n",current->content);
// }