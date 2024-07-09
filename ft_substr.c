/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:46:59 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/04 19:00:50 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(unsigned int start, size_t len, char const *s)
{
	if (ft_strlen(s) >= len + start)
		return (len);
	else
		return (ft_strlen(s) - start);
	return (0); 
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	int		remainder;

	i = 0;
	if (s == NULL)
		return (NULL);
	remainder = ft_counter(start, len, s);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	substring = ((char *)malloc(sizeof(char) * (remainder + 1)));
	if (substring == NULL)
	{
		return (NULL);
	}
	while (i < len && s[start])
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}

// int main()
// {
// 		char * s = ft_substr("tripouille", 0, 11);

// 		printf("%s", s);
// 		free(s);
// 		return (0);
// }
// int main(void)
// {
//     char *str1 = "Applest";
//     printf("%s\n", ft_substr(str1, 3, 5));
// }