/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:41:58 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/05 14:16:55 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_reverse_rotate(int **pile, char **instructions, char *str)
{
	int		index;
	int		tmp;
	char	*strtmp;

	index = (*pile)[0];
	tmp = (*pile)[index];
	while (index > 1)
	{
		(*pile)[index] = (*pile)[index - 1];
		--index;
	}
	(*pile)[1] = tmp;
	strtmp = *instructions;
	if (!(*instructions = ft_strjoin(*instructions, str)))
		return (0);
	return (1);
}

int		ft_double_reverse_rotate(int **pile_a, int **pile_b, char **instruc)
{
	ft_reverse_rotate(pile_a, instruc, "\0");
	ft_reverse_rotate(pile_b, instruc, "rrr\n");
	return (1);
}
