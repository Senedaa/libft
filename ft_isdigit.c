/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:26:41 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 21:24:02 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int s)
{
	if (s >= 48 && s <= 57)
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
// 	char b='1';
// 	char a='v';
// 	char c='2';

// 	printf("%d\n", ft_isdigit(b));
// 	printf("%d\n", ft_isdigit(a));
// 	printf("%d\n", ft_isdigit(c));

// }
