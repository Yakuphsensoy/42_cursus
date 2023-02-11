/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:28:20 by yasensoy          #+#    #+#             */
/*   Updated: 2023/01/20 11:55:12 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
//     int fd = open("/users/yasensoy/desktop/test.txt" O_WRONLY);
//     ft_putchar_fd('S', fd);
// }
// // belirtilen dosya tanımlayıcısına (fd) c karakterini yazar.*/
