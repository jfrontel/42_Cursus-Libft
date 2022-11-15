/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:15:20 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 16:10:33 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	unsigned char	*aux;

	index = 0;
	aux = malloc((ft_strlen (s) + 1) * (sizeof (char)));
	if (!aux || !s || !f)
		return (NULL);
	while (s[index] != '\0')
	{	
		aux[index] = f(index, s[index]);
		index++;
	}
	aux[index] = '\0';
	return ((char *)aux);
}

/*int	main(void)
{
	char str[] = "Terminator";
	char *f;
	
	printf("%s\n", f);
}*/
