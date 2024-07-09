/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:43:08 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 23:19:16 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*val1;
	unsigned char	*val2;
	size_t			i;

	val1 = (unsigned char *)str1;
	val2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (val1[i] != val2[i])
		{
			return (val1[i] - val2[i]);
		}
		i++;
	}
	return (0);
}

// int main() 
// {
//     char str1[] = "cat";
//     char str2[] = "cinammon";
//     printf("%d\n", ft_memcmp(str1,str2,4));
//     printf("%d\n", memcmp(str1,str2,4));
// }