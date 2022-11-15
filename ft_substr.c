/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:49:28 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/11 13:37:15 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str_aux;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (start > ft_strlen(s))
	{	
		str_aux = malloc(sizeof(char));
		str_aux[0] = '\0';
		return (str_aux);
	}
	if (len > ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	str_aux = malloc((len + 1) * sizeof(char));
	if (!str_aux || !s)
		return (NULL);
	while (s[count])
	{
		if (count >= start && count < len + start)
			str_aux[i++] = s[count];
		count++;
	}
	str_aux[i] = '\0';
	return (str_aux);
}
/*
int	main(void)
{
	char	*resp;
	char	*str = "Mimama me";
	
	resp = ft_substr(str, 2, 20);

	printf("%s\n", resp);
}*/
