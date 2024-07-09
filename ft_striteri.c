/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:32:36 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:39:18 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	j;

	j = 0;
	if (!s || !f)
		return ;
	while (s[j])
	{
		(*f)(j, &s[j]);
		j++;
	}
}

// void	ft_rotone(unsigned int i, char *alpha)
// {
// 	i = 0;
// 	if (*alpha >= 'a' && *alpha < 'z')
// 		*alpha = *alpha + 1;
// 	else if (*alpha >= 'A' && *alpha < 'Z')
// 		*alpha = *alpha + 1;
// 	else if (*alpha == 'Z' || *alpha == 'z')
// 		*alpha = *alpha - 25;
// }
// int main (void)
// {
// 	char str[]= "this";
// 	ft_striteri(str, ft_rotone);
// 	printf("%s", str);
// }