/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 19:26:04 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:09:15 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_stringcpy(char *dest, const char *src, size_t start, size_t end)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = start;
	while (b <= end)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	new_len;
	char	*newstring;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	if (!(*s1))
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]) != NULL) 
	{
		start++;
	}
	while (end > start && ft_strchr(set, s1[end]) != NULL) 
	{
		end--;
	}
	new_len = end - start + 1;
	newstring = (char *)malloc(new_len + 1);
	if (newstring == NULL)
		return (NULL);
	ft_stringcpy (newstring, s1, start, end);
	return (newstring);
}

// int main()
// {
// 	 const char *s1 = "\nHello world\t ";
// 	 const char *set = " \n\t";
// 	 //printf("%zu\n",strlen(s1));
// 	 //char *trimmed_str = trim(s1, set);
// 	 printf("%s\n", ft_strtrim(s1, set));
//     return 0;
// }