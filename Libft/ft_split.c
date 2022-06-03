/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 03:54:13 by shahn             #+#    #+#             */
/*   Updated: 2022/05/13 05:26:24 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count(const char *s, char c)
{
	size_t	i;
	size_t	num_str;

	num_str = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			num_str++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (num_str);
}

static size_t	len_str(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		num_str;
	int		i;
	int		len;

	if (!s)
		return (0);
	num_str = str_count(s, c);
	array = (char **)malloc((num_str + 1) * sizeof(char *));
	if (!array)
		return (0);
	i = 0;
	while (i < num_str)
	{
		while (*s == c)
			s++;
		len = len_str(s, c);
		array[i] = ft_substr(s, 0, len);
		s = s + len;
		i++;
	}
	array[num_str] = NULL;
	return (array);
}
