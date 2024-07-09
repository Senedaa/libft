/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:42:15 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 21:24:57 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') 
		|| (s >= 48 && s <= 57))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

// //
// int main (void)
// {
// 	int a = 2;
// 	char b='c';
// 	char c= '2';
// 	char d='A';

// 	printf("%d\n", ft_isalnum(a));
// 	printf("%d\n", ft_isalnum(b));
// 	printf("%d\n", ft_isalnum (c));
// 	printf("%d\n", ft_isalnum(d));

// }
// //