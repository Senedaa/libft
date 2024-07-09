/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:22:36 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/09 00:04:24 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	str2len;

	if (needle[0] == '\0')
		return ((char *)(haystack));
	if (haystack == NULL && n == 0)
		return (NULL);
	str2len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < n && needle[j])
		{
			j++;
		}
		if (j == str2len) 
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL); 
}

// int main(void)
// {
//     //char a[] = "washello";
//     //char b[] = "hello world";
//     printf("%s\n", ft_strnstr(((void *)0), "fake", 0));
//     //printf("%s\n", strnstr(((void *)0), "fake", 0));
//     return 0;
// }