/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:38:13 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/26 21:39:02 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

//#include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/yasensoy/Desktop/test.txt",O_WRONLY);
// 	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
// }

// s dizisini fd dosyasına yazar ve bir alt satıra geçer.
