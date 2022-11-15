/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:00:52 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 18:37:00 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *orig, size_t size)
{
	size_t	count_orig;
	size_t	count_dest;

	count_orig = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0' && count_dest < size)
		count_dest++;
	while ((orig[count_orig] != '\0') && (size > count_orig + count_dest + 1))
	{
		dest[count_dest + count_orig] = orig[count_orig];
		count_orig++;
	}
	if (count_dest < size)
		dest[count_dest + count_orig] = '\0';
	return (ft_strlen(orig) + count_dest);
}

/*int	main(void)
{
	char dest[] = "Esto es Esparta";
	char dest1[] = "Esto es Esparta";
	char orig[] = "culpable";
	char orig1[] = "culpable";
	
	printf("%lu\n", strlcat(dest1, orig1, 15));
	printf("%lu\n", ft_strlcat(dest, orig, 15));

	printf("%s\n", dest1);
	printf("%s\n", dest);
}*/
