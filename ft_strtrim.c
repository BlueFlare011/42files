/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:42:38 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/24 14:42:39 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	full(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	aux;

	aux = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (set[j] == s1[i])
				aux++;
			j++;
		}
		if (aux == 0)
			return (0);
		aux = 0;
		i++;
		j = 0;
	}
	return (1);
}

static int	find(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	forge(const char *str, unsigned int start,
	unsigned int end, char *res)
{
	int	i;

	i = 0;
	while (start < ft_strlen(str) - end)
	{
		res[i] = str[start];
		start++;
		i++;
	}
	res[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		k;
	int		f;

	if (full(s1, set))
		return ("");
	i = -1;
	k = 0;
	f = 0;
	result = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!result)
		return (NULL);
	while (find(s1[++i], set))
		k++;
	i = ft_strlen(s1) - 1;
	while (find(s1[i], set))
	{
		f++;
		i--;
	}
	forge(s1, k, f, result);
	return (result);
}
