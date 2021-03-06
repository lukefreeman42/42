/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:03:24 by llelias           #+#    #+#             */
/*   Updated: 2018/11/10 00:43:36 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*f)(void*, size_t))
{
	if (*alst != NULL)
	{
		ft_lstdel(&((*alst)->next), (*f));
		ft_lstdelone(alst, (*f));
	}
}
