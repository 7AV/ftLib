/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:41:14 by sbudding          #+#    #+#             */
/*   Updated: 2020/11/11 10:52:41 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** 	The strdup() function allocates sufficient memory for a copy of the string
**	s1, does the copy, and returns a pointer to it.  The pointer may subsequen-
**	tly be used as an argument to the function free(3).
**
**	If insufficient memory is available, NULL is returned and errno is set to
**	ENOMEM.
*/
#include "libft.h"

char				*ft_strdup(const char *s1)
{
	unsigned int	len;
	unsigned int	index;
	char			*dst;

	len = ft_strlen((char *)s1);
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	index = 0;
	while (index <= len)
	{
		dst[index] = s1[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
