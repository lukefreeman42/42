/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:09:50 by llelias           #+#    #+#             */
/*   Updated: 2018/11/08 20:11:37 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ll_strrev(char *str)
{
	size_t len;
	size_t i;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		ll_swap(str + i, str + len - i - 1);
		i++;
	}
}
