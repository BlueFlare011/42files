/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:20:04 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/28 15:20:06 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*saux;
	unsigned int	i;

	i = 0;
	saux = s;
	while (i < n)
	{
		saux[i] = '\0';
		i++;
	}
}
