/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 09:42:41 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/10 10:40:16 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char lft;
	char rgh;

	lft = 0;
	while (lft < 100)
	{
		rgh = lft + 1;
		lu = lft % 10 + '0';
		lt = lft / 10 + '0';
		while (rgh < 100)
		{
			putchar(lft / 10 + '0');
			putchar(lft % 10 + '0');
			write(1, " ", 1);
			putchar(rgh / 10 + '0');
			putchar(rgh % 10 + '0');
			write(1, ", ", 2);
			rgh++;
		}
		lft++;
	}
}
