/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:43:22 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:44:16 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*outval;
	unsigned char	*inval;
	size_t			i;

	i = 0;
	outval = (unsigned char *) dest;
	inval = (unsigned char *) src;
	if (outval == NULL && inval == NULL)
		return (NULL);
	if (outval > inval)
	{
		while (n > 0)
		{
			outval[n - 1] = inval[n - 1];
			n--;
		}
		return (outval);
	}
	else
	{
		ft_memcpy(dest, src, n);
		return (outval);
	}
}
// int main (void)
// {
//     char a[10]="hello";
//     printf("%s\n", memmove(a+2,a,3));

// }