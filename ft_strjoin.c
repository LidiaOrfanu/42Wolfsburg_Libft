/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:25:58 by lorfanu           #+#    #+#             */
/*   Updated: 2022/01/10 21:40:38 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates (with malloc(3)) 
** returns a new string:the result of the concatenation of s1 & s2
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*concatenation;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	concatenation = (char *)malloc(sizeof(char) * (len + 1));
	if (!concatenation)
		return (NULL);
	while (s1[i])
	{
		concatenation[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		concatenation[i + j] = s2[j];
		j++;
	}
	concatenation[i + j] = '\0';
	return (concatenation);
}
