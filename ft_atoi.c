/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 23:42:18 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/11 20:57:22 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkval(int sign, long long number, int digit)
{
	if (sign == 1 && number > (LLONG_MAX - digit) / 10)
		return (-1);
	if (sign == -1 && number > (LLONG_MAX - digit) / 10)
		return (0);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long	number;
	int			sign;
	int			digit;

	number = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		digit = *str - 48;
		checkval(sign, number, digit);
		number *= 10;
		number = number + digit;
		str++;
	}
	return (sign * number);
}

// int main (void)
// {
//        char *s ="-9223372036854775807";
//     //char *s ="585";
//     printf("%d\n",ft_atoi(s));
//     printf("%d\n",atoi(s));
//     //printf("%lld",18446744073709551616);
// }
