/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:09:39 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 17:06:10 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *str_dest, const void *str_orig, size_t count)
{
	unsigned char	*dest;
	unsigned char	*orig;

	dest = (unsigned char *) str_dest;
	orig = (unsigned char *) str_orig;
	if (count == 0)
		return (str_dest);
	if (dest > orig)
	{
		while (count-- > 0)
		{
			dest[count] = orig[count];
		}
	}
	if (dest < orig)
		ft_memcpy(str_dest, str_orig, count);
	return (str_dest);
}

/*
int	main(void)
{
	unsigned char	str_dest[] = "Su puntuación es: ";
	unsigned char	str_dest1[] = "Su puntuacion es: ";
	unsigned char	str_orig[] = "Hola como ";
	unsigned char	str_orig1[] = "Hola como ";
	size_t	n;

	n = 2;
	printf("%s\n", memmove(str_dest1 + 5, str_orig1, sizeof (char) *3));
	printf("%s\n", ft_memmove(str_dest + 5, str_orig, 3));
}*/
