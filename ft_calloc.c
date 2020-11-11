/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:28:51 by sbudding          #+#    #+#             */
/*   Updated: 2020/11/11 11:12:43 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** 	The calloc() function contiguously allocates enough space for count objects
**	that are size bytes of memory each and returns a pointer to the allocated
**	memory.  The allocated memory is filled with bytes of value zero.
*/

#include "libft.h"

void				*ft_calloc(size_t count, size_t size)
{
	void			*dest;
	unsigned char	*ptr;
	size_t			len;

	len = count * size;
	if (!(dest = (void *)malloc(len)))
		return (NULL);
	ptr = dest;
	while (len--)
		*ptr++ = 0;
	return (dest);
}
