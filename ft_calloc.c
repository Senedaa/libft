/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:42:28 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/03 22:51:03 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*i;

	if (size && (nitems > UINT_MAX / size))
	{
		return (NULL);
	}
	i = malloc(nitems * size);
	if (i == NULL)
	{
		return (NULL);
	}
	ft_bzero(i, nitems * size);
	return (i);
}

// int main(void)
// {
//     int *arr = (int *)ft_calloc(4, 4);
//     int i = 0;
//     int zeroCount = 0; 
//     if (arr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1; // Return 1 to indicate an error
//     }
//     // Print the array elements and count zeros
//     while (i < 4)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     // Print the number of zeros
//     printf("\nNumber of elements set to zero: %d\n", zeroCount);
//     printf("%lu", SIZE_MAX);
// }   