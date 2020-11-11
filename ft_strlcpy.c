/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:01:25 by sbudding          #+#    #+#             */
/*   Updated: 2020/11/08 19:51:07 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** 	The strlcpy() and strlcat() functions copy and concatenate strings with
**	the same input parameters and output result as snprintf(3). They are
**	designed to be safer, more consistent, and less error prone replacements
**	for the easily misused functions strncpy(3) and strncat(3).
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen((char*)src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char*)src));
}
