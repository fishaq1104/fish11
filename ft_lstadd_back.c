/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:08:27 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/04 16:56:07 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}
// int main()
// {
//     t_list *lst = NULL;
//     lst = ft_lstnew("hi!");
//     lst->next = ft_lstnew("hello");
//     lst->next->next = ft_lstnew("bored");
//     t_list *new;
//     new = ft_lstnew("yup");
//     t_list *current;
//     ft_lstadd_back(&lst,new);
//     current = lst;
//     while(current != NULL)
//     {
//         printf("%s\n",current->content);
//         current = current->next;
//     }
//     return(0);
// }
