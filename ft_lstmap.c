/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:31:36 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 18:28:02 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst1;
	t_list	*newnode;
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	lst1 = NULL;
	while (current != NULL)
	{
		newnode = ft_lstnew(f(current->content));
		if (newnode == NULL)
		{
			ft_lstclear(&lst1, del);
			return (NULL);
		}
		ft_lstadd_back(&lst1, newnode);
		current = current->next;
	}
	return (lst1);
}
