/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:46:26 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/04 20:17:51 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				len;
	unsigned char	b;

	len = 0;
	len = ft_strlen(str);
	b = (unsigned char) c;
	while (len >= 0)
	{
		if (str[len] == b)
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return (NULL);
}

// int main()
// {
//     const char str[] = "http";
//     const char ch = '\0'; 
//     printf("%s\n", ft_strrchr(str, ch));
//     printf("%s\n", strrchr(str, ch));
//     return 0;
// }
