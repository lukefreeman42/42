/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llelias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 08:20:51 by llelias           #+#    #+#             */
/*   Updated: 2018/12/03 19:41:45 by llelias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fstrdup(char *s)
{
	char *dup;

	if (s)
		if ((dup = ft_strdup(s)))
		{
			ft_strdel(&s);
			return (dup);
		}
	return (NULL);
}
