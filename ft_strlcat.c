/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:45:55 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:39:29 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest == NULL && size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	while (dest[i] && i < size)
		i++;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = src [j];
		j++;
	}
	if (j < size)
		dest[i + j] = '\0';
	j = 0;
	while (src[j])
	{
		j++;
	}
	return (i + j);
}

// int main ()
// {
//     char d [] = "the cake is a lie !\0I'm hidden lol\r\n";
//    // char e []="there is no stars in the sky";
//    // size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
//     size_t len = strlcat(NULL, d, 0);
//     printf("%zu",len);
// }
