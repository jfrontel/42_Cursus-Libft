/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:28:57 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/04 14:53:37 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = 0;
	while (*str)
	{
		str++;
		index++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)str);
	while (index >= 0)
	{
		if (*str == (unsigned char) c)
			return ((char *)str);
		index--;
		str--;
	}
	return ((char *) NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strrchr("mi mama me cuida", 'a'));
}*/
