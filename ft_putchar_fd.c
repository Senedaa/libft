/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:35:51 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/11 22:10:21 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main (void)
// {
//     char a = 'A';
//     int fd = open("test.doc", O_WRONLY | O_CREAT | O_TRUNC);

//     ft_putchar_fd(a,fd);

//     return (0);
// }
