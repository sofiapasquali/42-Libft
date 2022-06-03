/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 02:50:43 by shahn             #+#    #+#             */
/*   Updated: 2022/05/10 03:49:25 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	size;

	new_str = NULL;
	if (!s)
		return (new_str);
	size = ft_strlen(s) - start;
	if ((int)size < 0)
		size = 0;
	else if (size > len)
		size = len;
	new_str = (char *)malloc(size + 1);
	if (!new_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < size)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
