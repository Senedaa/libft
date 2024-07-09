/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:26:56 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 21:23:06 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int s)
{
	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
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
// 	int b='T';
// 	char c='2';
// 	char d='a';

// 	printf("%d\n", ft_isalpha(b));
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d\n", ft_isalpha(d));
// }
