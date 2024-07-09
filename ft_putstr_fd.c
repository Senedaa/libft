/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:58:09 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 16:59:13 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include<fcntl.h>

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

// int main ()
// {
// 	//char a[]= "this";
// 	char *a;

// 	a = NULL;
// 	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 777);
// 	ft_putstr_fd(a,fd);

// }
