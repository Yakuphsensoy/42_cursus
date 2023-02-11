/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:11:38 by yasensoy          #+#    #+#             */
/*   Updated: 2023/01/19 19:35:45 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
// #include <stdio.h>

// int main()
// {
//     t_list *node1,*node2;

//     node1 = ft_lstnew("42");
//     node2 = ft_lstnew(" Kocaeli");

//     ft_lstadd_back(&node1,node2);

//     printf("%s",(char *)node1->content);
//     printf("%s",(char *)node1->next->content);
// }

// lst structının bağlı olduğu listelerin sonuna gider ve new sructını ekler.
