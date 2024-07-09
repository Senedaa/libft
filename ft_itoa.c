/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:25:02 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/03 22:08:07 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	if (str == NULL)
		return (NULL);
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

static int	counterval(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*checknegative(int i, int x, int n)
{
	char	*substring;

	substring = (char *)malloc(sizeof(char) * ((i + 2)));
	if (substring == NULL)
		return (NULL);
	while (x < i + 1)
	{
		substring[x] = '0' + (n % 10);
		substring[i] = 45;
		n /= 10;
		x++;
	}
	substring[x] = '\0';
	return (substring);
}

static char	*checkpostive(int i, int x, int n)
{
	char	*substring;

	substring = (char *)malloc(sizeof(char) * ((i + 1)));
	if (substring == NULL)
		return (NULL);
	while (x < i)
	{
		substring[x] = '0' + (n % 10);
		n /= 10;
		x++;
	}
	substring[x] = '\0';
	return (substring);
}

char	*ft_itoa(int n)
{
	char	*substring;
	int		i;
	int		x;
	int		y;

	x = 0;
	y = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		n *= -1;
	i = counterval(n);
	if (y < 0)
		substring = checknegative(i, x, n);
	else
		substring = checkpostive(i, x, n);
	return (ft_strrev(substring));
}

// int main(void) 
// {
// 	 int x = -1234;
// 	// printf("%d", counterval(x));
// 	 printf("%s", ft_itoa(x));
// 	 return 0;
// }