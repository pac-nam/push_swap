/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:43:03 by tbleuse           #+#    #+#             */
/*   Updated: 2018/03/06 16:23:57 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL)
		return ;
	if ((*alst)->next != NULL)
		ft_lstdel(&(*alst)->next, (del));
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
