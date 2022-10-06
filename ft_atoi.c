/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:55:14 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 15:01:01 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *nptr)
{
	long	i;
	long	mult;
	long	number;

	i = 0;
	mult = 1;
	number = 0;
	if (nptr[0] == '\0')
		return (i);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\f' || \
			nptr[i] == '\r' || nptr[i] == '\n' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	number *= mult;
	return (number);
}

/*int main(void)
{
	const char s[] = " 	+654rfdyg";
	int z;

	z = ft_atoi(s); 
	printf("%d\n", z);

}*/
