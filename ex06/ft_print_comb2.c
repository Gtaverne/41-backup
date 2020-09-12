/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 09:42:41 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 14:32:52 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char lft;
	char rgh;

	lft = 0;
	while (lft < 99)
	{
		rgh = lft + 1;
		while (rgh < 100)
		{
			my_putchar(lft / 10 + '0');
			my_putchar(lft % 10 + '0');
			write(1, " ", 1);
			my_putchar(rgh / 10 + '0');
			my_putchar(rgh % 10 + '0');
			if (lft < 98)
			{
				write(1, ", ", 2);
			}
			rgh++;
		}
		lft++;
	}
}
