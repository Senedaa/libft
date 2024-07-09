/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:45:21 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:39:22 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newstring = (char *)malloc(ft_strlen(s1)+ft_strlen(s2)+ 1);
	if (newstring == NULL)
		return (NULL);
	ft_strcpy(newstring, (char *)s1);
	ft_strcat(newstring, (char *)s2);
	return (newstring);
}

// int main(void)
// {
//     char *str1 = "Apples are red";
//     char *str2 = "and blue";
//     char *str3 = ft_strjoin(str1, str2);
//     printf("%s\n", str3);
//     // Don't forget to free the memory allocated by ft_strjoin
//     return 0;
// }