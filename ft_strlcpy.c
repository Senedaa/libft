/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:46:02 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 22:58:34 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	k = 0;
	while (src[k])
	{
		k++;
	}
	if (size < 1)
	{
		return (k);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (k);
}
// int main()
// {
// 	char dest[6]="this";
// 	char src[]="happythis";
// 	unsigned int i = ft_strlcpy(dest,src,7);
// 	printf("%d",i);
// 	printf("%s",dest);
// }
