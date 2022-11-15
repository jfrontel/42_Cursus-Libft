/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:41:31 by jfrontel          #+#    #+#             */
/*   Updated: 2022/04/29 14:18:35 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return ((size_t) index);
}

/*int	main(void)
{
	printf("%zu\n", ft_strlen("En mi casa hoy"));
}*/
