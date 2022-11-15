/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:15:57 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/10 15:52:00 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;	

	index = 0;
	if (!s || !f)
		return ;
	while (s[index] != '\0')
	{	
		f(index, &s[index]);
		index++;
	}
}

/*int	main(void)
{
	char str[] = "Terminator";
	ft_striteri(str, &f);
	
	printf("%s\n", str);
}*/
