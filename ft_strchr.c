/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:29:36 by sbudding          #+#    #+#             */
/*   Updated: 2020/11/11 11:35:13 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** 	The strchr() function locates the first occurrence of c (converted
**	to a char) in the string pointed to by s.  The terminating null character
**	is considered to be part of the string; therefore if c is `\0', the
**	functions locate the terminating `\0'.
**
** The strrchr() function is identical to strchr(), except it locates the
** 	last occurrence of c.
**
** RETURN VALUES
** 	The functions strchr() and strrchr() return a pointer to the located
**	character, or NULL if the character does not appear in the string.
*/
#include "libft.h"

char				*ft_strchr(char *str, int a)
{
	while (*str)
	{
		if (*str == (char)a)
			return ((char *)str);
		str++;
	}
	if ((char)a == '\0')
		return ((char *)str);
	return (NULL);
}
