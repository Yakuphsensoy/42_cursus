/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:48:30 by yasensoy          #+#    #+#             */
/*   Updated: 2023/01/19 19:35:26 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>

// int main(void)
// {
// 	t_list *node1;
// 	t_list *node2;

// 	node1 = ft_lstnew("42");
// 	node2 = ft_lstnew(" Kocaeli");	
// 	node1->next = node2;
// 	node2->next = NULL;
// 	ft_lstadd_front(&node1,node2);

// 	 printf("%s",(char *)node1->content);
// 	 printf("%s",(char *)node1->next->content);
	// return (0);
//}
// lst structının bağlı olduğu listelerin başına ekler
// lst structı ve new structı listenin başlangıcını işaret eder.
