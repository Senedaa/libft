/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:28:43 by sabraham          #+#    #+#             */
/*   Updated: 2023/08/12 19:35:56 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst -> content);
	free (lst);
}

// void del(void *ptr)
// {
//     free(ptr);
// }

// int main(void)
// {
//     t_list *head = ft_lstnew("sened");
//     printf("Before deletion: %s\n", (char*)head->content);
//     ft_lstdelone(head, del);
//     printf("After deletion\n");
//     return 0;
// }