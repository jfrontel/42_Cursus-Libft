/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:51:27 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 18:25:10 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_str(long nb)
{
	int	count_aux;

	count_aux = 0;
	if (nb == 0)
		count_aux = 1;
	else if (nb < 0)
	{
		nb = -nb;
		count_aux++;
	}
	while (nb > 0)
	{	
		nb = nb / 10;
		count_aux++;
	}
	return (count_aux);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*string;
	int		i;

	nb = n;
	i = ft_size_str(nb);
	string = (char *)malloc (sizeof(char) * (i + 1));
	if (!string)
		return (NULL);
	string[i--] = '\0';
	if (nb == 0)
		string[0] = '0';
	if (nb < 0)
	{
		string[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		string[i--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (string);
}

/*int	main(void)
{
printf("%s\n", ft_itoa(-853));
}*/
