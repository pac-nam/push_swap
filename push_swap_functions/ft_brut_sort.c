/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brut_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 11:30:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/12 16:03:37 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static char *ft_precise_recursive(t_ps_struct *stock, char *str, int count, char *instruct)
{

	ft_recursive_b_sort(stock, str, count - 1)
}

static char	*ft_recursive_b_sort(t_ps_struct *stock, char *str, int count)
{
	char	*tmp;

	tmp = str;
	if (!count)
	{
		if (ft_tab_is_sort(stock->a) && !stock->b[0])
			return (str);
		return (NULL);
	}
	if ((str = ft_precise_recursive(stock, str, count, "pa\n")) ||
			(str = ft_precise_recursive(stock, str, count, "pb\n")) ||
			(str = ft_precise_recursive(stock, str, count, "sa\n")) ||
			(str = ft_precise_recursive(stock, str, count, "sb\n")) ||
			(str = ft_precise_recursive(stock, str, count, "ss\n")) ||
			(str = ft_precise_recursive(stock, str, count, "ra\n")) ||
			(str = ft_precise_recursive(stock, str, count, "rb\n")) ||
			(str = ft_precise_recursive(stock, str, count, "rr\n")) ||
			(str = ft_precise_recursive(stock, str, count, "rra\n")) ||
			(str = ft_precise_recursive(stock, str, count, "rrb\n")) ||
			(str = ft_precise_recursive(stock, str, count, "rrr\n")))
		return (str);
	return (NULL)
}

int		ft_brut_sort(t_ps_struct *stock)
{
	int	count;
	char	*str;

	count = 1;
	if (!(str = (char*)malloc(1)))
		return (0);
	while (!(str = ft_recursive_b_sort(stock, str, count)))
	{
		ft_strdel(&str);
		if (!(str = (char*)malloc(1)))
			return (0);
		++count;
	}
	ft_strdel(&stock->str);
	stock->str = str;
	return (1);
}
