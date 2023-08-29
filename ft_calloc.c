/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:47:43 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/05 12:18:34 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size != 0 && count > (UINT32_MAX / size))
		return (NULL);
	str = (void *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, count * size);
	return (str);
}
// int main() {
//     // Allocate memory for an array of integers
//     int* numbers = (int*)ft_calloc(5, sizeof(int));

//     if (numbers == NULL)
//     {
//         // Handle allocation failure
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     // Use the allocated memory
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", numbers[i]);  // Output: 0 0 0 0 0
//     }
//     printf("\n");

//     // Deallocate the memory
//     free(numbers);

//     return (0);
// }