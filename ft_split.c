/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:44:57 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 20:03:27 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_sep(char index, char sep)
{
	if (index == sep)
		return (1);
	return (0);
}

static int	word_counter(char const *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep (str[i], sep))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !is_sep(str[i], sep))
			i++;
	}
	return (count);
}

static int	checkmem(char **array, int k)
{
	if (array[k - 1] == NULL)
	{
		while (k > 0)
		{
			free(array[k - 1]);
			k--;
		}
		return (1);
	}
	return (0);
}

static int	complete_array(char **array, const char *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (is_sep(s[i], c))
			i++;
		j = 0;
		while (s[i + j] && !is_sep(s[i + j], c))
			j++;
		if (j > 0)
		{
			array[k++] = (char *)malloc(sizeof(char) * (j + 1));
			if (checkmem(array, k) == 1)
				return (1);
			ft_strlcpy(array[k - 1], s + i, j + 1);
		}
		i = i + j;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**buffer;

	if (s == NULL)
		return (NULL);
	word_count = word_counter(s, c);
	buffer = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (buffer == NULL)
		return (NULL);
	if (complete_array(buffer, s, c) == 1)
	{
		free(buffer);
		return (NULL);
	}
	buffer[word_count] = NULL;
	return (buffer);
}

// int main()
// {
// 	char **buffer = ft_split("hello!", ' ');
// 	printf("%s", buffer[0]);
// 	return (0);	
// }
// int main (void)
// {
//     char *str1= "  Happy birthday siem you suck bts rocks     ";
//     // char b='a';
//     char **buffer = ft_split(str1, ' ');
//     int i = 0;
//     while (buffer[i] != NULL)
//         printf("%s\n", buffer[i++]);
//     return (0);
// }