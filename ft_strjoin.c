/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbudding <sbudding@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:58:44 by sbudding          #+#    #+#             */
/*   Updated: 2020/11/11 11:28:52 by sbudding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parameters
** 	#1.  The prefix string.
**	#2.  The suffix string.
**
** Return value
** 	The new string.  NULL if the allocation fails.
**
** Description
** 	Allocates (with malloc(3)) and returns a new string, which is the result
** 	of the concatenation of ’s1’ and ’s2’.
*/
#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	unsigned int	len_sum;
	char			*dst;

	if ((!s1) || (!s2))
		return (NULL);
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	len_sum = len_s1 + len_s2;
	if (!(dst = (char *)malloc((len_sum + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(dst, s1);
	ft_strcpy(dst + len_s1, s2);
	return (dst);
}
