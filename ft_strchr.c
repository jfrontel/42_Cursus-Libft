/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:17:32 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 15:47:41 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (unsigned char) c)
			return ((char *)str);
		str++;
	}	
	if ((unsigned char) c == '\0')
		return ((char *)str);
	return ((char *) NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strchr("Madre mia", 'w'));
}*/
