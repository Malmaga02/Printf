/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalmari <mgalmari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:59:21 by mgalmari          #+#    #+#             */
/*   Updated: 2024/01/15 16:50:40 by mgalmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int		i;
	char	*t;

	i = 0;
	t = (char *)s;
	while (t[i] != '\0')
		i++;
	return (i);
}