/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:06:01 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 12:00:01 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;
	t_list	*current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		new = current->next;
		ft_lstdelone(current, del);
		current = new;
	}
	*lst = NULL;
}

void	del_fun(void *content)
{
	free(content);
}
// int main()
// {
//     t_list *head = NULL;
//     head = ft_lstnew(strdup("Hello"));
//     head->next = ft_lstnew(strdup("World"));
//     head->next->next = ft_lstnew(strdup("from"));
//     head->next->next->next = ft_lstnew(strdup("Linked"));
//     head->next->next->next->next = ft_lstnew(strdup("List"));

//     printf("Before clearing the list:\n");
//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf("%s ", (char *)(current->content));
//         current = current->next;
//     }
//     printf("\n");
//     ft_lstclear(&head, del_fun);
//     printf("After clearing the list:\n");
//     current = head;
//     while (current != NULL)
//     {
//         printf("%s ", (char *)(current->content));
//         current = current->next;
//     }
//     printf("\n");

//     return (0);
// }
// int main()
// {
//     t_list *node1 = ft_lstnew("new");
//     t_list *node2 = ft_lstnew("no");
//     t_list *node3 = ft_lstnew("why?");

//     t_list *head = NULL;
//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node3);

//     printf("Before clearing the list:\n");
//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf("%s ", (char *)(current->content));
//         current = current->next;
//     }
//     printf("\n");

//     ft_lstclear(&head, del_fun);

//     printf("After clearing the list:\n");
//     current = head;
//     while (current != NULL)
//     {
//         if (current->content != NULL)
//         {
//             printf("%s ", (char *)(current->content));
//         }
//         current = current->next;
//     }
//     printf("\n");

//     return (0);
// }