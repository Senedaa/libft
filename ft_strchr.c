/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:45:04 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 18:54:39 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	int				len;
	unsigned char	b;

	i = 0;
	len = ft_strlen(str);
	b = (unsigned char) c;
	while (i <= len)
	{
		if (str[i] == b)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char str[] = "http://www.tutorialspoint.com";
//     const char ch = 't'; 
//     printf("%s\n", ft_strchr(str, ch));
//     printf("%s\n", strchr(str, ch));
//     return 0;
// }
