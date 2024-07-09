/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:43:16 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/03 22:11:16 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*outval;
	unsigned char	*inval;
	size_t			i;

	outval = (unsigned char *) dest;
	inval = (unsigned char *) src;
	if (outval == NULL && inval == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		outval[i] = inval[i];
		i++;
	}
	return (outval);
}

// int main (void)
// {
//     //char a[5]="sened";
// 	//char b[5]="hap";
// 	char *x;
//     x= ft_memcpy(((void *)0), ((void *)0), 3);
//     printf("%s\n", x);
// }
