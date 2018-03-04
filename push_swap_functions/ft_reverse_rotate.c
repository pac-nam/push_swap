/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:58 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/04 13:50:11 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_reverse_rotate(int **pile)
{
	int		index;
	int		tmp;

	index = (*pile)[0];
	tmp = (*pile)[index];
	while (index > 1)
	{
		(*pile)[index] = (*pile)[index - 1];
		--index;
	}
	(*pile)[1] = tmp;
	return (1);
}

int		ft_double_reverse_rotate(int **pile_a, int **pile_b)
{
	ft_reverse_rotate(pile_a);
	ft_reverse_rotate(pile_b);
	return (1);
}
