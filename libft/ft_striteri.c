/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasensoy < yasensoy@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:12:26 by yasensoy          #+#    #+#             */
/*   Updated: 2022/12/26 21:27:29 by yasensoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*#include <stdio.h>

void ft_42(unsigned int a. char *c)
{
    *c = ft_toupper(*c);

}
#include <stdio.h>

int main()
{
    char str [] = "hello";
    printf("%s\n", str);
    ft_striteri(str, ft_42);
    printf("&s\n", str);
}

s stringindeki her karakterin adresine tek tek f fonksiyonu uygulanır.*/
