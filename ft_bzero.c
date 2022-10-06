/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:17:06 by jfrontel          #+#    #+#             */
/*   Updated: 2022/04/29 17:26:32 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		ptr[n - 1] = '\0';
		n--;
	}
}

/*int	main(void)
{
	char	str[]= "Hola mundillop";
	size_t	n;

	n = 2;
	ft_bzero(str, n);
	printf("%s\n", str);
}*/
