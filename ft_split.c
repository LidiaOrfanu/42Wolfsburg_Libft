/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorfanu <lorfanu@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:45:39 by lorfanu           #+#    #+#             */
/*   Updated: 2022/03/17 01:57:17 by lorfanu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
** Allocates (with malloc(3)) and returns an array of strings 
** obtained by splitting ’s’ using the character ’c’ as a delimiter.
** The array must be ended by a NULL pointer.
*/

static char	**ft_get_words(char const *s, char c, char **res, size_t nb_words)
{
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		if ((end - start) > 0)
		{
			res[nb_words] = ft_substr(s, start, end - start);
			nb_words++;
		}
	}
	res[nb_words] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_words;
	char	**res;

	nb_words = 0;
	res = (char **)malloc(sizeof(*res) * ft_strlen(s));
	if (s && res)
	{
		ft_get_words(s, c, res, nb_words);
		return (res);
	}
	else
		return (NULL);
}

int main() {
  char str[50] = "Vlad isZ Zsuper";
  int i = 0;
  char **res;

  res = ft_split(str, 'Z');
  while (res[i])
  {
    printf("%s", res[i]);
    i++;
  }
  return 0;
}
