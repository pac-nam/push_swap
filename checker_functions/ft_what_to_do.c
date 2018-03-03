/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_what_to_do.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:18:20 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/03 14:44:04 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int		ft_what_to_do(int **pile_a, int **pile_b, char *str)
{
	if (!ft_strcmp(str, "sa"))
		return (ft_swap(pile_a));
	if (!ft_strcmp(str, "sb"))
		return (ft_swap(pile_b));
	if (!ft_strcmp(str, "ss"))
		return (ft_double_swap(pile_a, pile_b));
	if (!ft_strcmp(str, "pa"))
		return (ft_push(pile_a, pile_b));
	if (!ft_strcmp(str, "pb"))
		return (ft_push(pile_b, pile_a));
	if (!ft_strcmp(str, "ra"))
		return (ft_rotate(pile_a));
	if (!ft_strcmp(str, "rb"))
		return (ft_rotate(pile_b));
	if (!ft_strcmp(str, "rr"))
		return (ft_double_rotate(pile_a, pile_b));
	if (!ft_strcmp(str, "rra"))
		return (ft_reverse_rotate(pile_a));
	if (!ft_strcmp(str, "rrb"))
		return (ft_reverse_rotate(pile_b));
	if (!ft_strcmp(str, "rrr"))
		return (ft_double_reverse_rotate(pile_a, pile_b));
	if (!ft_strcmp(str, ""))
		return (2);
	return (0);
}
