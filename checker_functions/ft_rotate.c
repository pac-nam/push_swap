/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:42:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/28 16:04:15 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_rotate(int **pile)
{
	int		index;
	int		tmp;

	index = 1;
	tmp = (*pile)[1];
	while (index < (*pile)[0])
	{
		(*pile)[index] = (*pile)[index + 1];
		++index;
	}
	(*pile)[index] = tmp;
	return (1);
}

int			ft_double_rotate(int **pile_a, int ** pile_b)
{
	ft_rotate(pile_a);
	ft_rotate(pile_b);
	return (1);
}
