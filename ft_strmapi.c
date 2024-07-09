/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:29:03 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/01 16:32:15 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	int		j;
	char	*newstring;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	newstring = (char *)malloc (sizeof(char) * (i + 1));
	if (newstring == NULL)
		return (NULL);
	j = 0;
	while (s[j])
	{
		newstring[j] = (*f)(j, s[j]);
		j++;
	}
	newstring[j] = '\0';
	return (newstring);
}

// char	ft_rotone(unsigned int i, char alpha)
// {
// 	i = 0;
// 	if (alpha >= 'a' && alpha < 'z')
// 		alpha = alpha + 1;
// 	else if (alpha >= 'A' && alpha < 'Z')
// 		alpha = alpha + 1;
// 	else if (alpha == 'Z' || alpha == 'z')
// 		alpha = alpha - 25;

// 	return (alpha);
// }

// int main (void)
// {
//     char *str= "this";
//     printf("%s", ft_strmapi(str, ft_rotone));
// }
