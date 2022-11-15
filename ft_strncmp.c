/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:55:23 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 15:55:23 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *str_one, const char *str_two, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (str_one[index] == str_two[index]
		&& str_one[index] != '\0' && str_two[index] != '\0')
	{
		if (index < n - 1)
			index++;
		else
			return (0);
	}
	return ((unsigned char)str_one[index] - (unsigned char)str_two[index]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("abrca", "abcca", 0));
	printf("%d\n", strncmp("abrca", "abcca", 0));
}*/
