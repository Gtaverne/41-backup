/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 10:48:05 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 14:45:17 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ex7_putchar(char c);
int		testsignornull(int a);
void	ft_putnbr(int nb);

void	ex7_putchar(char c)
{
	write(1, &c, 1);
}

int		testsignornull(int a)
{
	if (a < 0)
	{
		ex7_putchar('-');
		a = -a;
	}
	if (a == 0)
	{
		ex7_putchar('0');
	}
	return (a);
}

void	ft_putnbr(int nb)
{
	int	pwr;
	int	rest;

	pwr = 1000000000;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		rest = testsignornull(nb);
		while (rest < pwr)
		{
			pwr = pwr / 10;
		}
		while (pwr > 0)
		{
			ex7_putchar(rest / pwr + '0');
			rest = rest % pwr;
			pwr = pwr / 10;
		}
	}
}
