/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 17:00:09 by lorfanu           #+#    #+#             */
/*   Updated: 2022/01/08 14:43:25 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies up to size - 1 characters from the NUL-terminated string src to dst, 
** NUL-terminating the result
** return: the total length of the string they tried to create
** size = 0 -> the original fct returns the length of src, copies nothing
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		length;

	length = 0;
	if (!dest || !src)
		return (0);
	while (src[length] != '\0')
		length++;
	if (size == 0)
		return (length);
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}
