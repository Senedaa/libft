/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:07:21 by sabraham          #+#    #+#             */
/*   Updated: 2023/07/31 17:07:42 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// int main ()
// {
// 	char str[4]="this";
// 	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 777);
// 	ft_putendl_fd(str,fd);
// 	return 0;
// }