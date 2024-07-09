/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:42:23 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/01 22:30:13 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	int				i;
	unsigned char	*val;
	int				number;

	i = 0;
	val = (unsigned char *) str;
	number = (int) n;
	while (i < number)
	{
		val[i] = 0;
		i++;
	}
}
// int main(void)
// {
//     int i;
//     i=0;
//     char buffer[] ="C programmin memset function";
//     ft_bzero(buffer, 5);
//     printf("%s\n", buffer);
// }
