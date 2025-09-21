/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrosio <jbrosio@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:00:14 by jbrosio           #+#    #+#             */
/*   Updated: 2025/05/13 11:53:02 by jbrosio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <fcntl.h>
# include <stdarg.h>

int		ft_printf(char const *s, ...);
int		ft_searchtype(va_list vargs, char c);
int		ft_puthex_mayus(unsigned long long num);
int		ft_puthex_x(unsigned long long num);
int		ft_puthex_p(unsigned long long num);

#endif