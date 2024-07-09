/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:43:30 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/01 22:28:59 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*val;

	i = 0;
	val = (unsigned char *) str;
	while (i < n)
	{
		val[i] = (unsigned char)c;
		i++;
	}
	return (val);
}
// int main(void)
// {
//     char buffer[] =" C programmin memset function";
//     char *result = ft_memset(buffer, '#', 5);
//     printf("%s\n", result);    
// }
