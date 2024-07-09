/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:25:39 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 21:27:58 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int s)
{
	if (s >= 32 && s < 127)
		return (1);
	else
		return (0);
}

// int main (void)
// {
// 	char a='a';
// 	char b='\t';

// 	printf("%d\n", ft_isprint(a));
// 	printf("%d\n", ft_isprint(b));
// }
