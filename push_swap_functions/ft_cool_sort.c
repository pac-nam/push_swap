/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cool_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 15:54:54 by tbleuse           #+#    #+#             */
/*   Updated: 2018/04/19 16:58:55 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_cool_sort(int *pile_a)
{
	int			*pile_b;
	char		*str;

	if (!(str = malloc(1)) ||
			!(pile_b = (int*)malloc(sizeof(int) * (pile_a[0] + 1))))
		return (0);
	*str = '\0';
	*pile_b = 0;
	while (pile_a[0] > 2)
		ft_push(&pile_b, &pile_a, &str, "pb\n");
	if (pile_a[1] > pile_a[2])
		ft_ps_swap(&pile_a, &str, "sa\n");
	if (!(str = ft_second_cool_sort(&pile_a, &pile_b, &str)))
		return ("Error\n");
	free(pile_b);
	return (str);
}


static char *ft_second_double_sort(int **a, int **b, char **str, int ref)
{
	int     target;
	int     target_index;

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
