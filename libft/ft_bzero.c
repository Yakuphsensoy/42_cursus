/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:50:55 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/28 01:21:38 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)

{
	ft_memset(s, 0, n);
}

// #include <unistd.h>
// int main()
// {
//     int i;
//     char str[] = "yakupsensoy";
//     i = ft_strlen(str);
//     ft_bzero(str, 4);
//     write(1, &str, i);
//     return 0;
// }
// s dizisine n değeri kadar null değer atar.
