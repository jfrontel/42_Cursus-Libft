/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:14:09 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 15:03:08 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (unsigned char *)malloc(count * size);
	if ((count >= SIZE_MAX && size > 1) || (size >= SIZE_MAX && count > 1))
		return (NULL);
	if (ptr != NULL)
	{
		ft_bzero(ptr, size * count);
		return (ptr);
	}
	return (NULL);
}
