/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:16:06 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/11 13:46:28 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}

/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	count;
	unsigned long	count_two;
	unsigned char	*str;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (!s1 || !s2)
		return (NULL);
	count = 0;
	count_two = 0;
	while (count < (ft_strlen(s1) + ft_strlen(s2) + 1))
	{
		while (count < ft_strlen(s1))
		{
			str[count] = s1[count];
			count++;
		}
		str[count] = s2[count_two];
		count++;
		count_two++;
	}
	str[count] = '\0';
	printf("%c\n", str[count]);
	return ((char *)str);
}

int	main(void)
{
	char const	*s1 = "hola y ";
	char const	*s2 = "adios nos vemos por la tarde";

	printf("%s\n", ft_strjoin(s1, s2));
}*/
