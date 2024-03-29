/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 22:13:05 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:18 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

size_t	ft_strndlen(char const *str, char c, size_t max)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] && str[i] == c && i < max)
		i++;
	while (str[i] && str[i] != c && i < max)
	{
		i++;
		len++;
	}
	return (len);
}
