/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrontel <jfrontel@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:44:39 by jfrontel          #+#    #+#             */
/*   Updated: 2022/05/04 13:51:38 by jfrontel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(const char *str, char c)
{
	int	count_word;
	int	i;

	count_word = 0;
	i = 0;
	if (str[0] != c)
		count_word++;
	if (str[ft_strlen(str)- 1] != c)
		count_word++;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (str[i + 1] != c)
				count_word++;
		}
		i++;
	}
	return (count_word - 1);
}

static char	*make_word(char const *s, char c)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc (sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (s[j] && s[j] != c)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array_split;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	array_split = (char **)malloc (sizeof(char *) * (ft_words(s, c) + 1));
	if (!array_split)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			array_split[i] = make_word (s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	array_split[i] = NULL;
	return (array_split);
}

/*
int main(void)
{
//	char	str[] = "     ";	
	char	str[] = "Hila Epi trata. vida pulsera Panaderia";
	char 	c = 'i';
	char	**array_split;
	int i =0;
	printf("FRASE %s\n", str);
	array_split = ft_split(str, c);
	while(i <= ft_words(str, c))
	{	
	printf("FT_SPLIT[%d] = %s\n", i, array_split[i]);
	i++;
	}
}*/
