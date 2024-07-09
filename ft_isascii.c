/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:42:41 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 21:25:55 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int s)
{
	if (s >= 0 && s <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main (void)
// {
// 	char a='a';
// 	char b='4';

// 	printf("%d\n", ft_isascii(a));
// 	printf("%d\n", ft_isascii(b));
// }
