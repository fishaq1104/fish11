/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:59:40 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 12:18:05 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void print_string(void *content)
// {
//     printf("%s ", (char *)content);
// }
// int main()
// {
//     // Create a linked list with strings
//     t_list *str_head = NULL;
//     ft_lstadd_back(&str_head, ft_lstnew("Hello"));
//     ft_lstadd_back(&str_head, ft_lstnew("from"));
//     ft_lstadd_back(&str_head, ft_lstnew("Linked"));
//     ft_lstadd_back(&str_head, ft_lstnew("List"));

//     printf("print the list yaa:\n");
// 	ft_lstiter(str_head, print_string);

//     //ft_lstclear(&str_head, del);

//     return 0;
// }