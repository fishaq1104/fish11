/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:43:33 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 13:39:49 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *lst = NULL;
//     lst = ft_lstnew("I");
//     lst->next = ft_lstnew("am");
//     lst->next->next = ft_lstnew("fine");
//     t_list *new;
//     new = ft_lstnew("NO!");
//     t_list *current;
//     ft_lstadd_front(&lst,new);
//     current = lst;
//     while(current != NULL)
//     {
//         printf("%s\n",current->content);
//         current = current->next;
//     }
//     return(0);
// }