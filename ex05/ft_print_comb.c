/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 15:43:01 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/12 16:03:53 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char centaine;
	char dizaine;
	char unite;

	centaine = '0';
	while (centaine <= '7')
	{
		dizaine = centaine + 1;
		while (dizaine <= '8')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				write(1, &centaine, 1);
				write(1, &dizaine, 1);
				write(1, &unite, 1);
				if (centaine != '7')
					write(1, ", ", 2);
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}
