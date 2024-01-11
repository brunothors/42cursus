/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnespoli <bnespoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:57:50 by bnespoli          #+#    #+#             */
/*   Updated: 2024/01/11 17:56:05 by bnespoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

typedef struct s_list
{
	char			content;
	struct s_list	*next;
}					t_list;

int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_put_ptr(unsigned long long n);
int	ft_printf(const char *format, ...);
int	ft_print_ptr(unsigned long long ptr);
int	ft_putdigit(long long n, int base, int key);

#endif