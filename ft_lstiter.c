/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:23:11 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:37:43 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	if (lst == NULL)
		return ;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}

// void	ft_rotone(void *ptr)
// {
// 	int		i;
// 	char	*str;

// 	str = (char *)ptr;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] < 'z')
// 			str[i] = str[i] + 1;
// 		else if (str[i] >= 'A' && str[i] < 'Z')
// 			str[i] = str[i] + 1;
// 		else if (str[i] == 'Z' || str[i] == 'z')
// 			str[i] = str[i] - 25;
// 		i++;
// 	}
// }
// int main(void)
// {
// 	char *data = malloc(sizeof(char) * 5);
// 	if (data == NULL)
// 		return 0;
// 		data = "this"
// 	strcpy(data, "this");
//     t_list *head = ft_lstnew(data);
//     printf("Before deletion: %s\n", (char*)head->content);
//     ft_lstiter(head,ft_rotone);
// 	printf("Asfter deletion: %s\n", (char*)head->content);
//     return 0;
// }

// int main(void)
// {
// 	char data[] = "this";
//     t_list *head = ft_lstnew(data);
//     printf("Before deletion: %s\n", (char*)head->content);
//     ft_lstiter(head,ft_rotone);
// 	printf("Asfter deletion: %s\n", (char*)head->content);
//     return 0;
// }