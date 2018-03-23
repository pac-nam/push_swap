/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_piles.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 12:47:50 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/23 14:53:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

void	ft_print_piles(int *pile_a, int *pile_b, char *str)
{
	int		index;

	index = 1;
	ft_putstr(str);
	write(1, "\npile_a : ", 10);
	while (index <= pile_a[0])
	{
		ft_putnbr(pile_a[index++]);
		write(1, " ", 1);
	}
	index = 1;
	write(1, "\npile_b : ", 10);
	while (index <= pile_b[0])
	{
		ft_putnbr(pile_b[index++]);
		write(1, " ", 1);
	}
	write(1, "\n----------------------------------------\n", 42);
}
