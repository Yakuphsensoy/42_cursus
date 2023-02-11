/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:31:50 by yasensoy          #+#    #+#             */
/*   Updated: 2023/01/19 19:34:13 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
// #include <stdio.h>

// int main()
// {
// 	t_list *node1,*node2,*node3;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	printf("%d",ft_lstsize(node1));
// }

// // Bağlı listenin uzunluğunu döndürür.
