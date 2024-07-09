/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:45:08 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/08 18:54:47 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	d;
	char	*res;

	i = 0;
	while (str[i])
	{
		i++;
	}
	res = (char *) malloc(sizeof(char) * (i + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	d = 0;
	while (str[d])
	{
		res[d] = str[d];
		d++;
	}
	res[d] = '\0';
	return (res);
}

// int main (void)
// {
//     char *str1= "happy";
//     printf("%s\n",ft_strdup(str1));
// }