/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:09:39 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 16:55:14 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *str_dest, const void *str_orig, size_t count)
{
	unsigned char	*dest;
	unsigned char	*orig;

	dest = (unsigned char *)str_dest;
	orig = (unsigned char *)str_orig;
	if (!str_dest && !str_orig)
		return (NULL);
	if (count == 0)
		return (str_dest);
	while (count-- > 0)
	{
		*dest++ = *orig++;
	}
	return (str_dest);
}

/*
int	main(void)
{
	unsigned char	str_dest[] = "Su puntuacion es: ";
	unsigned char	str_dest1[] = "Su puntuacion es: ";
	unsigned char	str_orig[] = "Hola";
	unsigned char	str_orig1[] = "Hola";
	size_t	n;

	n = 2;
	printf("%s\n", memcpy(str_dest1 + 3, str_orig1, sizeof (char) *2));
	printf("%s\n", ft_memcpy(str_dest + 3, str_orig, 2));
}*/
