/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbolilyi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 15:10:52 by dbolilyi          #+#    #+#             */
/*   Updated: 2018/04/01 16:17:16 by dbolilyi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 != 0) && (s2 != 0))
	{
		while ((n-- > 0) && ((*s1 != '\0') || (*s2 != '\0')))
			if (*(s1++) != *(s2++))
				return (0);
		return (1);
	}
	return (0);
}
