/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mllamas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:27:09 by mllamas-          #+#    #+#             */
/*   Updated: 2023/10/04 18:33:37 by mllamas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

# define HEXUP_BASE "0123456789ABCDEF"
# define HEXLOW_BASE "0123456789abcdef"
# define DEC_BASE "0123456789"

int		ft_printf(char const *format, ...);

void	ft_putbase(unsigned int nb, char *base, size_t *count);
void	ft_putnbr(int nb, size_t *count);
void	ft_putstr(char const *s, size_t *count);
void	ft_putchar(char c, size_t *count);
void    ft_putvoid(void *ptr, char *base, size_t *count);
size_t	ft_strlen(const char *s);
#endif
