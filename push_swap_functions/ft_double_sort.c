/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/04/19 15:51:57 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static char	*ft_second_double_sort(int **a, int **b, char **str, int ref)
{
	int		target;
	int		target_index;

	if (!(*b)[0])
		return (*str);
	target = ft_target(*b, ref);
	target_index = ft_index_of_nb(*b, target);
	if (target_index > (*b)[0] / 2 + 1)
		while ((*b)[1] != target)
			ft_reverse_rotate(b, str, "rrb\n");
	else
		while ((*b)[1] != target)
			ft_rotate(b, str, "rb\n");
	ft_push(a, b, str, "pa\n");
	if ((*a)[1] > (*a)[2])
		ft_rotate(a, str, "ra\n");
	return (ft_second_double_sort(a, b, str, ref));
}

char		*ft_double_sort(int *pile_a)
{
	int		ref;
	int		*pile_b;
	char	*str;

	if (!ft_median(pile_a, &ref) || !(str = malloc(1)) ||
			!(pile_b = (int*)malloc(sizeof(int) * (pile_a[0] + 1))))
		return (0);
	*str = '\0';
	*pile_b = 0;
	while (pile_a[1] != ref)
		ft_push(&pile_b, &pile_a, &str, "pb\n");
	ft_rotate(&pile_a, &str, "ra\n");
	while (pile_a[1] != ref)
		ft_push(&pile_b, &pile_a, &str, "pb\n");
	if (!(str = ft_second_double_sort(&pile_a, &pile_b, &str, ref)))
		return ("Error\n");
	free(pile_b);
	return (str);
}
