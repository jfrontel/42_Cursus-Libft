/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:28:42 by jfrontel          #+#    #+#             */
/*   Updated: 2022/04/29 14:17:57 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *scr, size_t size)
{
	size_t	count;

	count = 0;
	if (!size)
		return (ft_strlen(scr));
	count = 0;
	while (scr[count] != '\0' && count < (size - 1))
	{
		dest[count] = scr[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(scr));
}

/*int	main(void)
  {	
	size_t n;

	n = 6;	
	char scr[] = "Matrix Resurreccio";
	char scr1[] = "Matrix Resurrectio";
	char dest[] = "Viva el vino y las mujeres";
	char dest1[] = "Viva el vino y las mujeres";
	
	printf("%lu\n", strlcpy(dest1, scr1, n));
	printf("%lu\n", ft_strlcpy(dest, scr, n));
	printf("%s\n", dest1);
	printf("%s\n", dest);
}*/
