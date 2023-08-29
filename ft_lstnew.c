/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:23:34 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/08 13:20:03 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*j;

	j = (t_list *)malloc(sizeof(t_list));
	if (j == NULL)
		return (NULL);
	j->content = content;
	j->next = NULL;
	return (j);
}
// int main()
// {
// 	// t_list *node1 = ft_lstnew("fathima");
// 	// t_list *node2 = ft_lstnew("fathima");

// 	t_list *head = NULL;
// 	head = ft_lstnew("Fathima");
// 	head->next = ft_lstnew("Aqeel");
//     t_list *current = head;
//     while(current != NULL)
//     {
//         printf("%s\n",(current->content));
//         current = current->next;
//     }
//     return (0);
// }