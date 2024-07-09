/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:40:19 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:37:57 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) (void *))
{
	t_list	*new_node;
	t_list	*new_list;

	new_list = NULL;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			ft_lstdelone(new_node, del);
			return (new_list);
		}
		new_node->content = (*f)(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*ft_rotone(void *ptr)
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
// 	return (str);
// }
// void del(void *ptr)
// {
//     free(ptr);
// }
// int main(void)
// {
// 	char data[] = "this";
//     t_list *head = ft_lstnew(data);
//     printf("Before deletion: %s\n", (char*)head->content);
//     ft_lstmap(head,ft_rotone,del);
// 	printf("Asfter deletion: %s\n", (char*)head->content);
//     return 0;
// }