/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 11:37:56 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/28 17:57:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

void             ft_debug(int *a, int *b, char *str)
{
        int             i;

	i = 1;
	ft_putstr(str);
	ft_putstr(" | pile_a[0] = ");
	ft_putnbr(a[0]);
	ft_putstr(" | pile_b[0] = ");
	ft_putnbr(a[0]);
	ft_putstr("\npile_a : ");
        while (i - 1 < a[0])
        {
                ft_putstr(ft_itoa(a[i++]));
                ft_putchar(' ');
        }
        ft_putstr("\npile_b : ");
        i = 1;
        while (i - 1 < b[0])
        {
                ft_putstr(ft_itoa(b[i++]));
                ft_putchar(' ');
        }
        ft_putchar('\n');
}
