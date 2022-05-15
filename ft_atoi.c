/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:30:28 by lorfanu           #+#    #+#             */
/*   Updated: 2022/01/08 11:27:51 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns the integer representation of a string
** skips all white-space characters at the beginning of the string, 
** converts the subsequent characters as part of the number, and then 
** stops when it encounters the first character that isn't a number
*/

int	ft_atoi(const char *nptr)
{
	int	result;
	int	aux;
	int	sign;

	result = 0;
	aux = 0;
	sign = 1;
	while ((*nptr != '\0') && ((*nptr == ' ') || (*nptr == '	')
			|| (*nptr == '\n')
			|| (*nptr == '\v') || (*nptr == '\f') || (*nptr == '\r')))
		nptr++;
	if (*nptr == '-')
	{
		nptr++;
		sign = -1;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9' && *nptr != '\0')
	{
		aux = *nptr - '0';
		result = result * 10 + aux;
		nptr++;
	}
	return (result * sign);
}
