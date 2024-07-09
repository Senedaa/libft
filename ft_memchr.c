/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:42:55 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 23:15:39 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*val;
	unsigned char	alpha;
	size_t			i;

	val = (unsigned char *)str;
	alpha = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (val[i] == alpha)
		{
			return (&val[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char str[] = "http://www.tutorialspoint.com";
//     const char ch = '.';
//     printf("%s\n", ft_memchr(str, ch,18));
//     printf("%s\n",memchr(str,ch,18));
//     return 0;
// }