/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 03:52:23 by shahn             #+#    #+#             */
/*   Updated: 2022/05/15 00:58:52 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void					*ptr;
	long long unsigned int	result;

	ptr = NULL;
	result = nmemb * size;
	if (nmemb != 0 && result / nmemb != size)
		return (NULL);
	ptr = malloc(result);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, result);
	return (ptr);
}
