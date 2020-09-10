/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:47:57 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/09 19:47:15 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		write(1, &i, 1);
		i = i++;
	}
}