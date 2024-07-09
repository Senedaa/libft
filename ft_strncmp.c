/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:46:17 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:39:40 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && !diff && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !diff && (s1[c] == '\0' || s2[c] == '\0'))
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (diff);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	s1 = "ceciestuntest";
// 	s2 = "aeciest";
// 	printf("%d\n", ft_strncmp(s1, s2, 1));
// 	printf("%d\n", ft_strncmp(s1, s2, 0));
// }
