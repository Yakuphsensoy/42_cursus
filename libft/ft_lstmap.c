/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:33:15 by yasensoy          #+#    #+#             */
/*   Updated: 2023/02/11 15:13:14 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*begin;

	if (lst == NULL || f == NULL)
		return (NULL);
	begin = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, new);
		lst = lst->next;
	}
	return (begin);
}

// #include <stdio.h>

// void    del(void *content)
// {
//    	free(content);
// }

// void *ft_change(void *content)
// {
// 	((char *)content)[0] -= 32;
// 	return(content);
// }

// int main()
// {
// 	t_list *node1,*node2;
// 	t_list *tmp;
// 	node1 = ft_lstnew(ft_strdup("yakup"));
// 	node2 = ft_lstnew(ft_strdup("kocaeli"));
// 	ft_lstadd_back(&node1, node2);
// 	tmp = ft_lstmap(node1, ft_change, del);
// 	printf("**%s**", (char *)tmp->content);
// 	printf("%s", (char *)tmp->next->content);
// }
