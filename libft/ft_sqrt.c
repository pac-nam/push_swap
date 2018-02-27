/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:53:59 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/18 11:32:27 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		x;

	x = 1;
	if (nb < 0 || nb > 2147395600)
		return (0);
	while (nb > (x * x))
		x++;
	return (x);
}
