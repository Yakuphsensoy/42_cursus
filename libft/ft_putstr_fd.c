/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:33:26 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/26 21:37:25 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*#include <fcntl.h>

int main()
{
    int fd = open("/Users/yasensoy/Desktop/test.txt", 1);
    ft_putstr_fd("merhaba dünya", fd);
}

fd dosyasına s dizisini yazar*/
