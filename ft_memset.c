/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:03:52 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/04 13:26:11 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		ptr[n - 1] = (unsigned char) c;
		n--;
	}
	return (str);
}

/*int main(void)
{
	char str[]= "mamamiabjj";

	printf("%s\n", ft_memset(str, 'c', 5 ));
	return(0);
}*/
