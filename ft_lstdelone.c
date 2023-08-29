/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:03:47 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/08 13:34:55 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// int main()
// {
// 	t_list *node = NULL;
// 	node = ft_lstnew("hello");
// 	printf("%s\n",node->content);
// 	ft_lstdelone(node->next, del);
// 	return (0);
// }
// int main()
// {
//     t_list *head = NULL;
//     head = ft_lstnew("r");
//     head->next = ft_lstnew("ll");
//		head->next = ft_lstnew("kk");
// 	ft_lstdelone(head->next,del);
//     t_list *current = head;
//     while(current != NULL)
//     {
//         printf("%s\n",(current->content));
//         current = current->next;
//     }

// }