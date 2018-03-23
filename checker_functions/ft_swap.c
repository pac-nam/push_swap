/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:44 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/07 11:25:07 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_checker_swap(int **pile)
{
	int		tmp;

	if ((*pile)[0] > 1)
	{
		tmp = (*pile)[1];
		(*pile)[1] = (*pile)[2];
		(*pile)[2] = tmp;
	}
	return (1);
}

int			ft_double_swap(int **pile_a, int **pile_b)
{
	ft_checker_swap(pile_a);
	ft_checker_swap(pile_b);
	return (1);
}
