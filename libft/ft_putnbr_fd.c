/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:40:01 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/26 21:40:36 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

//#include <fcntl.h>

// int main()
// {
// 	int fd = open("/Users/yasensoy/Desktop/test.txt",O_WRONLY);
// 	ft_putstr_fd("Merhaba ",fd);
// 	ft_putnbr_fd(42,fd);
// 	ft_putstr_fd(" Kocaeli",fd);
// }

// n parametresine girilen int değeri fd dosyasına yazar.