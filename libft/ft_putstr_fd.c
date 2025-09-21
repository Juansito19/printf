/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrosio <jbrosio@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:12:12 by jbrosio           #+#    #+#             */
/*   Updated: 2025/05/13 12:16:16 by jbrosio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		i += ft_putstr_fd("(null)", 1);
		return (i);
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}
