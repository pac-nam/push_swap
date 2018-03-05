/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:42:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/05 14:15:18 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_rotate(int **pile, char **instructions, char *str)
{
	int		index;
	int		tmp;
	char	*strtmp;

	index = 1;
	tmp = (*pile)[1];
	while (index < (*pile)[0])
	{
		(*pile)[index] = (*pile)[index + 1];
		++index;
	}
	(*pile)[index] = tmp;
	strtmp = *instructions;
	if (!(*instructions = ft_strjoin(*instructions, str)))
		return (0);
	ft_strdel(&strtmp);
	return (1);
}

int		ft_double_rotate(int **pile_a, int **pile_b, char **instructions)
{
	ft_rotate(pile_a, instructions, "\0");
	ft_rotate(pile_b, instructions, "rr\n");
	return (1);
}
